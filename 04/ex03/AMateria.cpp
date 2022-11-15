/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:48:04 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 18:06:59 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const & type) : type(type)
{
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType( void ) const
{
    return (this->type);
}
