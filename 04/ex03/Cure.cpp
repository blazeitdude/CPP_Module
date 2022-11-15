/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:34:27 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 18:08:11 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure& res) : AMateria("cure")
{
    *this = res;
}

Cure::~Cure()
{
}

Cure& Cure::operator=(const Cure& res)
{
   	this->type = res.type;
	return *this;
}

AMateria*    Cure::clone( void ) const
{
    AMateria*   ret = new Cure(*this);
    return (ret);
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "\' wounds *" << std::endl;
}