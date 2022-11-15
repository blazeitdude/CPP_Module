/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:12:45 by ldione            #+#    #+#             */
/*   Updated: 2022/10/22 21:12:19 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static void getAnswer(Point a, Point b, Point c, Point point)
{
    if (bsp(a, b, c, point))
        std::cout << "lies inside\n";
    else
        std::cout << "doesn't lies inside\n";
}

int main( void ) 
{
	Point a(2.0f, 0.0f);
	Point b(0.0f, 2.0f);
	Point c(0.0f, 0.0f);
	Point point1(0.0f, 2.0f);
	Point point2(-0.1f, 1.5f);
	Point point3(0.5f, 0.7f);

    getAnswer(a, b, c, point1);
    getAnswer(a, b, c, point2);
    getAnswer(a, b, c ,point1);
}