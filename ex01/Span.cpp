/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:45:24 by akonstan          #+#    #+#             */
/*   Updated: 2026/11/05 17:51:21 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
	: min(0)
	, max(0)
	, size(0)
	{}

Span::Span(unsigned int n)
	: min(0)
	, min(0)
	, size(n)
	{
		arr.resize(n);
	}

Span::Span(const Span& other)
	:min(other.min)
	,max(other.max)
	,size(other.size)
	{
		arr.swap(other.arr);
	}

Span& Span::operator=(const Span& other){
	if (this != &other){
		*this = Span(other);
	}
	return *this;
}

Span::~Span(){}

