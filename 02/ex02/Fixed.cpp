/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:13:01 by ldione            #+#    #+#             */
/*   Updated: 2022/10/22 21:45:46 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
}

Fixed::Fixed(const Fixed &base )
{
    *this = base;
}

Fixed::Fixed(const int whole)
{
    this->value = whole << Fixed::fract_bits;
}

Fixed::Fixed(const float number)
{
    this->value = roundf(number * (1  << Fixed::fract_bits));
}

int Fixed::getRawBits( void ) const
{
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

Fixed::~Fixed()
{
}

Fixed&   Fixed::operator=(const Fixed &base)
{
    this->value = base.value;
    return (*this);
}

//comparasion
bool    Fixed::operator>(const Fixed &input) const
{
    return this->toFloat() > input.toFloat() ? true : false;
}

bool    Fixed::operator<(const Fixed &input) const
{
    return this->toFloat() < input.toFloat() ? true : false;
}

bool    Fixed::operator>=(const Fixed &input) const
{
    return this->toFloat() >= input.toFloat() ? true : false;
}

bool    Fixed::operator<=(const Fixed &input) const
{
    return this->toFloat() <= input.toFloat() ? true : false;
}

bool    Fixed::operator==(const Fixed &input) const
{
    return this->toFloat() == input.toFloat() ? true : false;
}

bool    Fixed::operator!=(const Fixed &input) const
{
    return this->toFloat() != input.toFloat() ? true : false;
}

//ariythmetic
Fixed    Fixed::operator+(const Fixed &input) const
{
    Fixed   ret(this->toFloat() + input.toFloat());
    return (ret);
}

Fixed   Fixed::operator-(const Fixed &input) const
{
    Fixed   ret(this->toFloat() - input.toFloat());
    return (ret);
}

Fixed   Fixed::operator*(const Fixed &input) const
{
    Fixed   ret(this->toFloat() * input.toFloat());
    return (ret);
}

Fixed   Fixed::operator/(const Fixed &input) const
{
    Fixed   ret(this->toFloat() / input.toFloat());
    return (ret);
}

Fixed  Fixed::operator++( void )
{
    this->value++;
    return (*this);

}

Fixed	Fixed::operator++( int )
{
	Fixed	old(*this);

	++(*this);
	return (old);
}

Fixed  Fixed::operator--( void )
{
    this->value--;
    return (*this);

}

Fixed  Fixed::operator--( int )
{
    Fixed   temp(*this);
        
    --(*this);
    return (temp);
}


Fixed&  Fixed::min(Fixed &first, Fixed &second)
{
    if (first < second)
        return (first);
    else
        return (second);
}

const Fixed&    Fixed::min(const Fixed &first, const Fixed &second)
{
    if (first < second)
        return (first);
    else
        return (second);
}

Fixed&  Fixed::Fixed::max(Fixed &first, Fixed &second)
{
    if (first > second)
        return (first);
    else
        return (second);
}

const Fixed&    Fixed::max(const Fixed &first, const Fixed &second)
{
    if (first > second)
        return (first);
    else
        return (second);
}

std::ostream&    operator<<(std::ostream &out, const Fixed &number)
{
    out << number.toFloat();
    return (out);
}

float   Fixed::toFloat( void ) const
{
    return (static_cast<float>(this->value) / (1 << Fixed::fract_bits));
}

int     Fixed::toInt( void ) const
{
    return(this->value >> Fixed::fract_bits);
}