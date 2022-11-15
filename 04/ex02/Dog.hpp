/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:24:23 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 18:43:05 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog( std::string name);
    Dog( void );
    Dog(const Dog& res);
    virtual ~Dog();
    virtual Animal& operator=(const Animal& res);
    Dog&            operator=(const Dog& res);
    
    
    std::string         getName( void ) const;
    virtual void        makeSound( void ) const;
    virtual Brain*      getBrain( void ) const;

protected:
    Brain*      dog_brain;
    std::string name;
};

std::ostream&   operator<<(std::ostream& out, const Dog& res);