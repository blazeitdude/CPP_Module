/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:31:19 by ldione            #+#    #+#             */
/*   Updated: 2022/10/26 16:27:37 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( std::string name) : name(name)
{
    this->type = "Cat";
    std::cout << "Cat constructor\n";
}

Cat::Cat( void ) : name("default cat")
{
    this->type = "Cat";
    std::cout << "Cat constructor\n";
}

Cat::Cat( const Cat& res)
{
    this->name = res.name;
    this->type = res.type;
    std::cout << "Cat copy constructor\n";
}

Cat::~Cat()
{
    std::cout << "Cat destructor\n";
}

void    Cat::makeSound( void ) const
{
    std::cout << "\033[0;32m"
    << "If I'm a cat, it means... Meow!"
    << "\033[0m\n";
}

Cat& Cat::operator=(const Cat& res)
{
    this->name = res.name;
    this->type = res.type;
    std::cout << "Cat operator \"=\" called\n";
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