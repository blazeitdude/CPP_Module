/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:12:03 by ldione            #+#    #+#             */
/*   Updated: 2022/10/22 19:43:19 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int value;
    static const int fract_bits = 8;

public:
    Fixed();
    Fixed(const Fixed &base );
    Fixed(const int whole);
    Fixed(const float number);
    ~Fixed();
    
    //comparasion
    Fixed&              operator=(const Fixed &base);
    bool                operator>(const Fixed &input) const;
    bool                operator<(const Fixed &input) const;
    bool                operator>=(const Fixed &input) const;
    bool                operator<=(const Fixed &input) const;
    bool                operator==(const Fixed &input) const;
    bool                operator!=(const Fixed &input) const;

    //arithmetic
    Fixed               operator+(const Fixed &input) const;
    Fixed               operator-(const Fixed &input) const;
    Fixed               operator*(const Fixed &input) const;
    Fixed               operator/(const Fixed &input) const;
    Fixed               operator++( void ); //x++
    Fixed               operator++( int ); //++x
    Fixed               operator--( void ); //x--
    Fixed               operator--( int ); //
        
    static Fixed&       min( Fixed &first, Fixed &second);
    static const Fixed& min(const Fixed &first, const Fixed &second);
    static Fixed&       max( Fixed &first, Fixed &second);
    static const Fixed& max(const Fixed &first, const Fixed &second);
    
    
    int             getRawBits( void ) const;
    void            setRawBits( int const raw );
    float           toFloat( void ) const;
    int             toInt( void ) const;
};

std::ostream&    operator<<( std::ostream &out, const Fixed &number );

#endif