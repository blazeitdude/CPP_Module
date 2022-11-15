/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:14:27 by ldione            #+#    #+#             */
/*   Updated: 2022/10/22 21:08:58 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
private:
  Fixed const x;
  Fixed const y;

public:
    Point();
    Point( const Fixed x, const Fixed y );
    Point( const Point& inst );

    
    Point&  operator=( const Point& inst );
    Fixed   getX() const;
    Fixed   getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point );