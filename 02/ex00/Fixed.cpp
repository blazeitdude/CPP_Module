/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:13:01 by ldione            #+#    #+#             */
/*   Updated: 2022/10/22 13:28:01 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called\n";   
}

Fixed::Fixed( Fixed &base )
{
    this->value = base.getRawBits();
    std::cout << "Copy constructor called\n";
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed&   Fixed::operator=(const Fixed &base)
{
    this->value = base.getRawBits();
    std::cout << "Copy assignment operator called\n";
    return (*this);
}