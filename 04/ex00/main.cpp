/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:18:27 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 18:19:28 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal*       meta = new Animal();
    const Animal*       j = new Dog();
    const Animal*       i = new Cat();
    const WrongAnimal*  wrongich = new WrongCat();
    const WrongAnimal*  metaWrong = new WrongAnimal();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << wrongich->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    wrongich->makeSound();
    metaWrong->makeSound();
    return 0;
}