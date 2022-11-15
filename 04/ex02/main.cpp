/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:18:27 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 18:40:11 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal	*animals[8];
	Brain	*brain;

	for (int i = 0; i < 8; i++)
	{
		if (i < 8 / 2)
        	animals[i] = new Cat();
		else
            animals[i] = new Dog();
		std::cout << animals[i]->getType() << std::endl;
	}

	brain = animals[7]->getBrain();
	std::cout << "\n\n";
	brain->ideas[0] = "I'm hungry";
	brain->ideas[1] = "That's a strange idea I'm having";
	brain->ideas[2] = "Ball!!!!!";
	brain->ideas[3] = "Squirrel!!!!!";
	std::cout << animals[7]->getBrain()->ideas[0] << std::endl;
	std::cout << animals[7]->getBrain()->ideas[1] << std::endl;


	*(animals[5]) = *(animals[7]);
	std::cout << animals[5]->getBrain()->getIdea(1) << std::endl;
	std::cout << "\n\n";

	for (int i = 0; i < 8; i++)
		delete animals[i];
}