/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:24:23 by ldione            #+#    #+#             */
/*   Updated: 2022/10/26 16:25:55 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog( std::string name);
    Dog( void );
    Dog(const Dog& res);
    ~Dog();
    Dog& operator=(const Dog& res);
    
    std::string         getName( void ) const;
    virtual void        makeSound( void ) const;

protected:
    std::string name;
};

std::ostream&   operator<<(std::ostream& out, const Dog& res);