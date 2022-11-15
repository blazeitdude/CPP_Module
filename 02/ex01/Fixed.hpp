/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:12:03 by ldione            #+#    #+#             */
/*   Updated: 2022/10/22 16:05:13 by ldione           ###   ########.fr       */
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
    Fixed( Fixed &base );
    Fixed(const int whole);
    Fixed(const float number);
    ~Fixed();
    
    Fixed&          operator=(const Fixed &base);


    int             getRawBits( void ) const;
    void            setRawBits( int const raw );
    float           toFloat( void ) const;
    int             toInt( void ) const;
};

std::ostream&    operator<<( std::ostream &out, const Fixed &number );

#endif