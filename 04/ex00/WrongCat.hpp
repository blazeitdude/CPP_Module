/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:14:16 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 18:14:32 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat( std::string name);
    WrongCat( void );
    WrongCat(const WrongCat& res);
    ~WrongCat();
    WrongCat& operator=(const WrongCat& res);
    
    std::string         getName( void ) const;
    virtual void        makeSound( void ) const;

protected:
    std::string name;
};

std::ostream&   operator<<(std::ostream& out, const WrongCat& res);