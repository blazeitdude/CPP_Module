/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:02:11 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 15:45:21 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "AMateria.hpp"
#include "color.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
    Character( std::string name);
    Character( const Character& res);
    ~Character();
    
    Character&  operator=(const Character& res);

    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
    void         showInventory() const;

private:
    size_t                  equiped;
    std::string             name;
    AMateria*               inventory[4];
	AMateria*				discarded[4];

	size_t 					discarded_cout;
    static const size_t     inventory_size = 4;
};