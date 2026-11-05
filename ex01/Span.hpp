/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:45:20 by akonstan          #+#    #+#             */
/*   Updated: 2026/11/05 17:15:26 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <list>
# include <exception>

class Span{
	private:
		int min;
		int max;
		unsigned int size;
		std::list<int, 0> arr;
		Span();
	public:
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void	addNumber(int n);
		const long	shortestSpan();
		const long	longestSpan();
		void	fillSpan();

		int& operator[](int idx);
		const int& operator[](int idx) const;

		class NotEnoughElementsExceptions: public std::exception{
			public:
				const char* what() const throw(){
					return "Not enough elements in Span for this operation!";
				}
		}
};
#endif
