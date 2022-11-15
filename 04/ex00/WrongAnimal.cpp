/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:11:15 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 18:12:21 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal ( void )
{
    this->type = "none";
    std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal( const WrongAnimal& res)
{
    this->type = res.type;
    std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& res)
{
    this->type = res.type;
    std::cout << "WrongAnimal operator \"=\" called\n";
    return (*this);
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "Wait, what kind of animal am I?\n";
}

std::string     WrongAnimal::getType( void ) const
{
    return (this->type);
}

std::ostream&   operator<<(std::ostream& out, const WrongAnimal& res)
{
    out << "type = " << res.getType() << std::endl;
    return (out);
}