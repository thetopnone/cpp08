/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:45:15 by akonstan          #+#    #+#             */
/*   Updated: 2026/11/06 17:09:57 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main(void){
	Span s(10000);
	s.addNumber(-124012);
	s.fillSpan();

	std::cout << "min span: " << s.shortestSpan() << '\n';
	std::cout << "max span: " << s.longestSpan() << '\n';
	return 0;
}
