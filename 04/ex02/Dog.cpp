/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:59:52 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 18:35:01 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( std::string name) : name(name)
{
    this->type = "Dog";
    this->dog_brain = new Brain;
    std::cout << "Dog constructor\n";
}

Dog::Dog( void ) : name("default dog")
{
    this->dog_brain = new Brain;
    this->type = "Dog";
    std::cout << "Dog constructor\n";
}

Dog::Dog( const Dog& res)
{
    this->name = res.getName();
    this->type = res.getType();
    for (size_t i = 0; i < 100; i++)
        this->dog_brain->ideas[i] = res.dog_brain->getIdea(i);
    std::cout << "Dog copy constructor\n";
}

Dog::~Dog()
{
    std::cout << "Dog destructor\n";
    delete this->dog_brain;
}

void    Dog::makeSound( void ) const
{
    std::cout << "\033[0;32m"
    << "If I'm a Dog, it means... Bark!"
    << "\033[0m\n";
}

Dog& Dog::operator=(const Dog& res)
{
	std::cout << "Dog Assignement operator for Cat called" << std::endl;
	this->type = res.getType();
	for (size_t i = 0; i < 100; i++)
        this->dog_brain->ideas[i] = res.dog_brain->getIdea(i);
	return (*this);
}

Animal& Dog::operator=(const Animal& res)
{
    Brain*   tmp = res.getBrain();
    this->type = res.getType();
    for (size_t i = 0; i < 100; i++)
        this->dog_brain->ideas[i] = tmp->getIdea(i);
    std::cout << "Animal(Dog) operator \"=\" called\n";
    return (*this);
}

std::string Dog::getName( void ) const
{
    return (this->name);
}

std::ostream&   operator<<(std::ostream& out, const Dog& res)
{
    out << "this is " <<  res.getType()
    << "and his name is " << res.getName() << std::endl;
    return (out);
}

Brain*  Dog::getBrain( void ) const
{
    return (this->dog_brain);
}