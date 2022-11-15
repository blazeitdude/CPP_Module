/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:23:19 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 18:42:47 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
public:
    virtual ~Animal();
    
    virtual Animal& operator=(const Animal& res) = 0;
    virtual Brain	*getBrain( void ) const = 0;
    virtual void    makeSound() const = 0;
    std::string     getType( void ) const;

protected:
    std::string type;
};

std::ostream&   operator<<(std::ostream& out, const Animal& res);