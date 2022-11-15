/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:33:53 by ldione            #+#    #+#             */
/*   Updated: 2022/10/26 22:11:12 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "color.hpp"
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
    std::string type;
public:
    AMateria(std::string const & type);
    virtual ~AMateria();

    std::string const & getType( void ) const;
    virtual AMateria*   clone () const = 0;
    virtual void        use(ICharacter& target) = 0;
};