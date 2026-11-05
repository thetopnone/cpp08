/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:27:53 by akonstan          #+#    #+#             */
/*   Updated: 2026/11/05 00:02:20 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP
# include <iostream>
# include <algorithm>
# include <exception>

template<typename T>
int	easyfind(const T& cont, int num){
	try{
		int idx = std::find(cont.begin(), cont.end(), num);
		if (idx == cont.end())
			throw std::exception();
	}
	catch(...){
		
	}
	return idx;
}
#endif
