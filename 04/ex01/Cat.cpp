/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:31:19 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 18:39:34 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( std::string name) : name(name)
{
    this->cat_brain = new Brain;
    this->type = "Cat";
    std::cout << "Cat constructor\n";
}

Cat::Cat( void ) : name("default cat")
{
    this->cat_brain = new Brain;
    this->type = "Cat";
    std::cout << "Cat constructor\n";
}

Cat::Cat( const Cat& res)
{
    this->name = res.getName();
    this->type = res.getType();
    for (size_t i = 0; i < 100; i++)
        this->cat_brain->ideas[i] = res.cat_brain->getIdea(i);
    std::cout << "Cat copy constructor\n";
}

Cat::~Cat()
{
    std::cout << "Cat destructor\n";
    delete this->cat_brain;
}

void    Cat::makeSound( void ) const
{
    std::cout << "\033[0;32m"
    << "If I'm a cat, it means... Meow!"
    << "\033[0m\n";
}

Cat& Cat::operator=(const Cat& res)
{
	std::cout << "Cat Assignement operator for Cat called" << std::endl;
	this->type = res.getType();
	for (size_t i = 0; i < 100; i++)
        this->cat_brain->ideas[i] = res.cat_brain->getIdea(i);
	return (*this);
}

Animal& Cat::operator=(const Animal& res)
{
    Brain*  tmp = res.getBrain();
    this->type = res.getType();
    for (size_t i = 0; i < 100; i++)
        this->cat_brain->ideas[i] = tmp->getIdea(i);
    std::cout << "Animal(Cat) operator \"=\" called\n";
    return (*this);
}

std::string Cat::getName( void ) const
{
    return (this->name);
}

std::ostream&   operator<<(std::ostream& out, const Cat& res)
{
    out << "this is " <<  res.getType()
    << "and his name is " << res.getName() << std::endl;
    return (out);
}

Brain*  Cat::getBrain( void ) const
{
    return (this->cat_brain);
}