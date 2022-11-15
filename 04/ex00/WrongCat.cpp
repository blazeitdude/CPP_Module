/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:13:43 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 18:13:45 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( std::string name) : name(name)
{
    this->type = "WrongCat";
    std::cout << "WrongCat constructor\n";
}

WrongCat::WrongCat( void ) : name("default WrongCat")
{
    this->type = "WrongCat";
    std::cout << "WrongCat constructor\n";
}

WrongCat::WrongCat( const WrongCat& res)
{
    this->name = res.name;
    this->type = res.type;
    std::cout << "WrongCat copy constructor\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor\n";
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "\033[0;32m"
    << "If I'm a WrongCat, it means... Meow!"
    << "\033[0m\n";
}

WrongCat& WrongCat::operator=(const WrongCat& res)
{
    this->name = res.name;
    this->type = res.type;
    std::cout << "WrongCat operator \"=\" called\n";
    return (*this);
}

std::string WrongCat::getName( void ) const
{
    return (this->name);
}

std::ostream&   operator<<(std::ostream& out, const WrongCat& res)
{
    out << "this is " <<  res.getType()
    << "and his name is " << res.getName() << std::endl;
    return (out);
}