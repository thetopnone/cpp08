/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:45:20 by akonstan          #+#    #+#             */
/*   Updated: 2026/11/09 16:24:53 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <list>
# include <vector>
# include <exception>
# include <cmath>
# include <numeric>
# include <algorithm>
# include <iterator>
# include <ctime>
# include <cstdlib>

class Span{
	private:
		unsigned int size;
		unsigned int count;
		std::list<int> arr;
		Span();
	public:
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void	addNumber(int n);
		long	shortestSpan();
		long	longestSpan();
		void	fillSpan();

		//int& operator[](int idx);
		//const int& operator[](int idx) const;
		unsigned int getSize();

		class NotEnoughElementsException: public std::exception{
			public:
				const char* what() const throw(){
					return "Not enough elements in Span for this operation!(Span::NotEnoughElementsException)\n";
				}
		};

		class MaximumElementsReachedException: public std::exception{
			public:
				const char* what() const throw(){
					return "Maximum elements reached. Cannot fit new element(Span::MaximumElementsReachedException)\n";
				}
		};
};
#endif
