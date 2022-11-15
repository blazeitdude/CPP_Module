/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:14:13 by ldione            #+#    #+#             */
/*   Updated: 2022/10/22 21:08:36 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y)
{
}
 
Point::Point(const Point& inst) : x(inst.x), y(inst.y)
{
}

Point&  Point::operator=(const Point& inst)
{
    if (this == &inst)
        return (*this);
    else
    {
        (void) inst;
        return (*this);
    }
}

Fixed   Point::getX() const
{
    return (this->x);
}

Fixed   Point::getY() const
{
    return (this->y);
}