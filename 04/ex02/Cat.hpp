/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:24:08 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 18:43:02 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
    Cat( std::string name);
    Cat( void );
    Cat(const Cat& res);
    
    virtual ~Cat();
    virtual Animal& operator=(const Animal& res);
    Cat&            operator=(const Cat& res);
    
    std::string         getName( void ) const;
    virtual void        makeSound( void ) const;
    virtual Brain*      getBrain( void ) const;

protected:
    Brain*      cat_brain;
    std::string name;
};

std::ostream&   operator<<(std::ostream& out, const Cat& res);