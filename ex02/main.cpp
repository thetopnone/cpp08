/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:57:22 by akonstan          #+#    #+#             */
/*   Updated: 2026/11/10 16:45:22 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main(void){
	MutantStack<int> mstack;
	
	std::cout << "Inserting 5 in the stack\n";
	mstack.push(5);
	std::cout << "Inserting 17 in the stack\n";
	mstack.push(17);
	
	std::cout << "Top element in stack: ";
	std::cout << mstack.top() << std::endl;
	
	std::cout << "Removing top element in stack\n";
	mstack.pop();
	
	std::cout << "Top element in stack: ";
	std::cout << mstack.top() << std::endl;
	std::cout << "Stack size: ";
	std::cout << mstack.size() << std::endl;
	
	std::cout << "Adding elements to the stack\n";
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	std::cout << "Stack size: ";
	std::cout << mstack.size() << std::endl;

	std::cout << "\nTesting Iterators:\n\n";
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	
	std::cout << "Testing incrementing and decrementing iterator";
	++it;
	--it;
	--ite;
	++ite;

	std::cout << "Testing incrementing and decrementing reverse_iterator";
	++rit;
	--rit;
	--rite;
	++rite;
	std::cout << "\nOK!\n";

	std::cout << "\nUsing iterator to print the stack:\nStack: ";
	while (it != ite)
	{	
		std::cout << *it << " ";
		++it;
	}
	std::cout << "\nOK!\n";

	std::cout << "\nUsing reverse_iterator to print the stack:\nStack: ";
	while (rit != rite)
	{	
		std::cout << *rit << " ";
		++rit;
	}
	std::cout << "\nOK!\n";

	std::cout << "\nMaking mstack constant\n";
	const MutantStack<int>& const_mstack = const_cast<const MutantStack<int>& >(mstack);
	
	std::cout << "\nTesting constant iterators:\n\n";
	MutantStack<int>::const_iterator cit = const_mstack.begin();
	MutantStack<int>::const_iterator cite = const_mstack.end();
	MutantStack<int>::const_reverse_iterator crit = const_mstack.rbegin();
	MutantStack<int>::const_reverse_iterator crite = const_mstack.rend();
	
	std::cout << "Testing incrementing and decrementing const_iterator";
	++cit;
	--cit;
	--cite;
	++cite;
	std::cout << "\nOK!\n";
	
	std::cout << "Testing incrementing and decrementing const_reverse_iterator";
	++crit;
	--crit;
	--crite;
	++crite;
	std::cout << "\nOK!\n";
	
	std::cout << "\nUsing const_iterator to print the stack:\nStack: ";
	while (cit != cite)
	{	
		std::cout << *cit << " ";
		++cit;
	}
	std::cout << "\nOK!\n";
	
	std::cout << "\nUsing const_reverse_iterator to print the stack:\nStack: ";
	while (crit != crite)
	{	
		std::cout << *crit << " ";
		++crit;
	}
	std::cout << "\nOK!\n";

	std::cout << "Testing copy construction of stack from MutantStack:\n";
	std::stack<int> s(mstack);

	std::cout << "Testing copy construction of MutantStack from MutantStack:\n";
	MutantStack<int> ms(mstack);
	return 0;
}
