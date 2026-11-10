/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:35:04 by akonstan          #+#    #+#             */
/*   Updated: 2026/11/10 15:43:15 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

template<typename T, typename Cont>
MutantStack<T, Cont>::MutantStack()
	: std::stack<T,Cont>()
	{}

template<typename T, typename Cont>
MutantStack<T, Cont>::MutantStack(const MutantStack& other)
	: std::stack<T,Cont>(other)
	{}

template<typename T, typename Cont>
MutantStack<T, Cont>& MutantStack<T, Cont>::operator=(const MutantStack<T, Cont>& other){
	if (this != &other)
		std::stack<T,Cont>::operator=(other);
	return *this;
}

template<typename T, typename Cont>
MutantStack<T, Cont>::~MutantStack(){}

template<typename T, typename Cont>
typename MutantStack<T, Cont>::iterator MutantStack<T, Cont>::begin(){
	return (this->c.begin());
}

template<typename T, typename Cont>
typename MutantStack<T, Cont>::iterator MutantStack<T, Cont>::end(){
	return (this->c.end());
}

template<typename T, typename Cont>
typename MutantStack<T, Cont>::const_iterator MutantStack<T, Cont>::begin() const{
	return (this->c.begin());
}

template<typename T, typename Cont>
typename MutantStack<T, Cont>::const_iterator MutantStack<T, Cont>::end() const{
	return (this->c.end());
}

template<typename T, typename Cont>
typename MutantStack<T, Cont>::reverse_iterator MutantStack<T, Cont>::rbegin(){
	return (this->c.rbegin());
}

template<typename T, typename Cont>
typename MutantStack<T, Cont>::reverse_iterator MutantStack<T, Cont>::rend(){
	return (this->c.rend());
}

template<typename T, typename Cont>
typename MutantStack<T, Cont>::const_reverse_iterator MutantStack<T, Cont>::rbegin() const{
	return (this->c.rbegin());
}

template<typename T, typename Cont>
typename MutantStack<T, Cont>::const_reverse_iterator MutantStack<T, Cont>::rend() const{
	return (this->c.rend());
}
#endif
