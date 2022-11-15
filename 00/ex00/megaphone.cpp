/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:39:13 by ldione            #+#    #+#             */
/*   Updated: 2022/09/03 21:00:00 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int	main(int argc, char **argv)
{

	if (argc == 1)
		return (1);
	for (int i = 1; i < argc; i++)
	{
		std::string	line(argv[i]);
		for(size_t j = 0; j < line.length(); j++)
		std::cout << (char)std::toupper(line[j]);
	}
	std::cout << std::endl;
}