/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student,21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:53:44 by ldione            #+#    #+#             */
/*   Updated: 2022/11/04 02:47:23 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>

template<typename T>
class Array {
public:
	Array();
	Array(size_t size);
	Array(Array<T>& res);
	virtual ~Array();

	class outOfBounds : public std::exception {
		virtual const char	*what() const throw();
	};

	T&			operator[](size_t index);
	Array&		operator=(const Array& res);
	const T&	operator[](size_t index) const;
	size_t		size( void ) const;
	
private:
	size_t	length;
	T		*arr;
};

#include "Array.tpp"
