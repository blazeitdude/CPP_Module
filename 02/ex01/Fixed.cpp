/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:13:01 by ldione            #+#    #+#             */
/*   Updated: 2022/10/22 15:30:09 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called\n";   
}

Fixed::Fixed( Fixed &base )
{
    std::cout << "Copy constructor called\n";
    *this = base;
}

Fixed::Fixed(const int whole)
{
    std::cout << "Int constructor called\n";
    this->value = whole << Fixed::fract_bits;
}

Fixed::Fixed(const float number)
{
    std::cout << "Float constructor called\n";
    this->value = roundf(number * (1  << Fixed::fract_bits));
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
    this->value = base.value;
    std::cout << "Copy assignment operator called\n";
    return (*this);
}

std::ostream&    operator<<(std::ostream &out, const Fixed &number)
{
    out << number.toFloat();
    return (out);
}

float   Fixed::toFloat( void ) const
{
    return ((this->value) / static_cast<float>(1 << Fixed::fract_bits));
}

int     Fixed::toInt( void ) const
{
    return(this->value >> Fixed::fract_bits);
}