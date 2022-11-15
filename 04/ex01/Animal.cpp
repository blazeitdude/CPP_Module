/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:23:40 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 18:32:52 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal ( void )
{
    this->type = "none";
    std::cout << "Animal constructor called\n";
}

Animal::Animal( const Animal& res)
{
    this->type = res.getType();
    std::cout << "Animal copy constructor called\n";
}

Animal::~Animal()
{
    std::cout << "Animal destructor called\n";
}

Animal& Animal::operator=(const Animal& res)
{
    this->type = res.getType();
    std::cout << "Animal operator \"=\" called\n";
    return (*this);
}

void Animal::makeSound( void ) const
{
    std::cout << "Wait, what kind of animal am I?\n";
}

std::string     Animal::getType( void ) const
{
    return (this->type);
}

std::ostream&   operator<<(std::ostream& out, const Animal& res)
{
    out << "type = " << res.getType() << std::endl;
    return (out);
}