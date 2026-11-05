/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:27:53 by akonstan          #+#    #+#             */
/*   Updated: 2026/11/05 16:36:58 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP
# include <iostream>
# include <algorithm>
# include <exception>

template<typename T>
typename T::const_iterator	easyfind(const T& cont, int num){
	typename T::const_iterator iter = std::find(cont.begin(), cont.end(), num);
	if (iter == cont.end()){
		std::cerr << "Element " << num << " not detected\n";
		throw std::exception();
	}
	std::cout << "Found the value: " << *iter << " in position: " << std::distance(cont.begin(), iter) << '\n';
	return iter;
}
#endif
