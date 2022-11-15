/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:23:19 by ldione            #+#    #+#             */
/*   Updated: 2022/10/26 16:25:52 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Animal
{
public:
    Animal( void );
    virtual ~Animal();
    Animal(const Animal& res);
    Animal& operator=(const Animal& res);
    
    virtual void    makeSound() const ;
    std::string     getType( void ) const;

protected:
    std::string type;
};

std::ostream&   operator<<(std::ostream& out, const Animal& res);