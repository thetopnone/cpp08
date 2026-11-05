/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:27:50 by akonstan          #+#    #+#             */
/*   Updated: 2026/11/05 16:40:50 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <cstdlib>
#include <ctime>
#include "easyfind.hpp"

int main(void){
	std::vector<int> vec;
	std::vector<int> testpos;
	std::list<int> lst;
	std::deque<int> deck;
	std::srand(std::time(NULL));

	for (int i = 0; i < 5; ++i){
		int val = std::rand() % 6;
		vec.push_back(val);
		lst.push_back(val);
		deck.push_back(val);
	}

	testpos.assign(5, 2);
	try{
		easyfind(testpos, 2);
	}
	catch( const std::exception& e){}

	try{
		easyfind(vec, 1);
	}
	catch(const std::exception& e){}

	try{
		easyfind(lst, 0);
	}
	catch(const std::exception& e){}

	try{
		easyfind(deck, 5);
	}
	catch(const std::exception& e){}
	
	return 0;
}
