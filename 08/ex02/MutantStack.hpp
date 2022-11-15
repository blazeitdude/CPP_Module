/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:57:03 by ldione            #+#    #+#             */
/*   Updated: 2022/11/06 20:57:14 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <stack>
# include <iostream>

template<typename T>
class MutantStack: public std::stack<T>
{

public:

	MutantStack<T>( void ) { return; }
	MutantStack<T>( const MutantStack<T> &src ) { *this = src; }
	~MutantStack<T>( void ) { return; }

	MutantStack<T>	&operator=( const MutantStack<T> &rhs ) {
		(void)rhs;
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin( void ) { return this->c.begin(); }
	iterator	end( void ) { return this->c.end(); }

	static bool	verbose;

private:

};