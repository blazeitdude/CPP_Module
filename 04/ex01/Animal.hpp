/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:23:19 by ldione            #+#    #+#             */
/*   Updated: 2022/10/26 18:14:24 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
public:
    Animal( void );
    virtual ~Animal();
    Animal(const Animal& res);
    
    virtual Animal& operator=(const Animal& res);
    virtual Brain	*getBrain( void ) const = 0;
    virtual void    makeSound() const ;
    std::string     getType( void ) const;

protected:
    std::string type;
};

std::ostream&   operator<<(std::ostream& out, const Animal& res);