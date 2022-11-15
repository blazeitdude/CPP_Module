/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student,21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:43:47 by ldione            #+#    #+#             */
/*   Updated: 2022/11/04 01:49:56 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"
#include <cstdlib>
#include <string>


template<typename TD>
void    displayValue(TD& value)
{
	std::cout << "value -> " << value << std::endl;
}

void    randomValue(double& value)
{
	value = std::rand();
}

int main( void ) {
   std::string  words[3];
   double		money[5];

   words[0] = "what";
   words[1] = "you";
   words[2] = "want";
   for (int i = 0; i < 5; i++)
   {
    money[i] = std::rand() % 70;
   }

    std::cout << "string check\n\n";
   ::iter(words, 3, &displayValue);
   std::cout << "\nnumeric check\n\n";
      ::iter(money, 5, &displayValue);
   ::iter(money, 5, &randomValue);
   std::cout << "\n---after applying the function---\n\n";
   ::iter(money, 5, &displayValue);
}