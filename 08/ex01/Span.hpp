/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:28:21 by ldione            #+#    #+#             */
/*   Updated: 2022/11/06 20:34:12 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define GREEN "\033[0;32m"
#define RED   "\033[0;31m"
#define RESET "\033[0m"

#include <vector>
#include <exception>
#include <algorithm>
#include <iostream>

class Span
{
public:
	Span( unsigned N );
	Span( const Span& res );
	~Span( void );

	Span&   operator=(const Span& res);
	
	void    	addNumber(int number);
	void    	addByRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int     	shortestSpan( void );
	int     	longestSpan( void );
	unsigned	getSize();
	void		printSpan();
	
private:
	unsigned 	length;
	std::vector<int>    arr;

public:
	class OutOfBoundsException: public std::exception
	{ public: virtual const char* what() const throw(); };
	
	class CannotFoundException: public std::exception
	{ public: virtual const char* what() const throw(); };
};
