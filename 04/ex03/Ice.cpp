/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:40:53 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 18:08:15 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
};

Ice::Ice(const Ice& res) : AMateria("ice")
{
    *this = res;
}

Ice::~Ice()
{
}

Ice& Ice::operator=(const Ice& res)
{
    this->type = res.getType();
    return (*this);
}

AMateria*   Ice::clone() const
{
    AMateria*   ret = new Ice(*this);
    return (ret);
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}