/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:45:24 by akonstan          #+#    #+#             */
/*   Updated: 2026/11/06 17:11:17 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
	: size(0)
	, count(0)
	{}

Span::Span(unsigned int n)
	: size(n)
	, count(0)
	{}

Span::Span(const Span& other)
	: size(other.size)
	, count(other.count)
	, arr(other.arr)
	{}

Span& Span::operator=(const Span& other){
	if (this != &other){
		size = other.size;
		count = other.count;
		arr = other.arr;
	}
	return *this;
}

Span::~Span(){}

void	Span::addNumber(int n){
	if (count == size)
		throw Span::MaximumElementsReachedException();
	arr.push_front(n);
	count += 1;
}

long Span::shortestSpan(){
	if (count <= 1)
		throw NotEnoughElementsException();

	std::list<int> cpy(arr);
	std::vector<int> diff;

	cpy.sort();
	std::adjacent_difference(cpy.begin(), cpy.end(), std::back_inserter(diff));
	return std::abs(static_cast<long>(*
		std::min_element(diff.begin() + 1, diff.end())));
}

long Span::longestSpan(){
	if (count <= 1)
		throw NotEnoughElementsException();

	std::list<int> cpy = arr;
	cpy.sort();
	return std::abs(static_cast<long>(cpy.back()) - cpy.front());
}

static int generator(){
	static bool seeded = false;
	if (!seeded){
		std::srand(static_cast<unsigned int>(std::time(NULL)));
		seeded = true;
	}
	return (std::rand() * (std::rand() % 2 ? -1 : 1));
}

void	Span::fillSpan(){
	std::generate_n(std::back_inserter(arr), size - count, generator);
	count = static_cast<unsigned int>(arr.size());
}
