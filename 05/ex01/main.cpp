/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student,21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:14:18 by ldione            #+#    #+#             */
/*   Updated: 2022/10/28 17:44:13 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "Joe\n";
    try
	{
		Bureaucrat	joe = Bureaucrat("Joe", 1);
		std::cout << joe << std::endl;
		joe.decrementGrade(1);
		std::cout << joe << std::endl;
		joe.incrementGrade(1);
		std::cout << joe << std::endl;
		joe.incrementGrade(1);
		std::cout << joe << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Jack\n";
	try
	{
		Bureaucrat		jack = Bureaucrat("Jack", 150);
		std::cout << jack << std::endl;
		jack.incrementGrade(1);
		std::cout << jack << std::endl;
		jack.decrementGrade(1);
		std::cout << jack << std::endl;
		jack.decrementGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << "John\n";
	try
	{
		Bureaucrat		john = Bureaucrat("John", 0);
		std::cout << john << std::endl;
		john.decrementGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << "Jillian\n";
	try
	{
		Bureaucrat		jillian = Bureaucrat("Jillian", 151);
		std::cout << jillian << std::endl;
		jillian.incrementGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}