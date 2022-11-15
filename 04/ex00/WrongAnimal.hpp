/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:12:30 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 18:13:20 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
public:
    WrongAnimal( void );
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal& res);
    WrongAnimal& operator=(const WrongAnimal& res);
    
    void    makeSound() const ;
    std::string     getType( void ) const;

protected:
    std::string type;
};

std::ostream&   operator<<(std::ostream& out, const WrongAnimal& res);