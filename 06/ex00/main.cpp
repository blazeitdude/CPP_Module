/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student,21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 02:03:48 by ldione            #+#    #+#             */
/*   Updated: 2022/10/31 19:28:14 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Typecast.hpp"

int main(int argc, char *argv[])
{
	Typecast cast;
    try
	{
		if (argc == 1)
			throw (Typecast::NoINput());
		for (int i = 1; i < argc; i++)
		{
			cast.getTypeOf(argv[i]);
			cast.cast();
			if (i + 1 < argc)
				std::cout << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}