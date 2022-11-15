/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:59:52 by ldione            #+#    #+#             */
/*   Updated: 2022/10/26 16:28:01 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( std::string name) : name(name)
{
    this->type = "Dog";
    std::cout << "Dog constructor\n";
}

Dog::Dog( void ) : name("default dog")
{
    this->type = "Dog";
    std::cout << "Dog constructor\n";
}

Dog::Dog( const Dog& res)
{
    this->name = res.name;
    this->type = res.type;
    std::cout << "Dog copy constructor\n";
}

Dog::~Dog()
{
    std::cout << "Dog destructor\n";
}

void    Dog::makeSound( void ) const
{
    std::cout << "\033[0;32m"
    << "If I'm a Dog, it means... Bark!"
    << "\033[0m\n";
}

Dog& Dog::operator=(const Dog& res)
{
    this->name = res.name;
    this->type = res.type;
    std::cout << "Dog operator \"=\" called\n";
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