/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:02:01 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 18:08:23 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string name) : equiped(0), name(name), discarded_cout(0)
{
    for (size_t i = 0; i < Character::inventory_size; i++)
	{
		this->discarded[i] = NULL;
		this->inventory[i] = NULL;
	}
}

Character::Character(const Character& res)
{
    *this = res;
}

Character::~Character()
{
    for (size_t i = 0; i < Character::inventory_size; i++)
    {
		if (this->discarded[i] != NULL)
			delete this->discarded[i];
        if (this->inventory[i] != NULL)
            delete this->inventory[i];
    }
}

Character&  Character::operator=(const Character& res)
{
	this->equiped = 0;
	for (size_t i = 0; i < Character::inventory_size; i++)
	{
		if (this->discarded[i] != NULL)
			delete this->discarded[i];
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
		this->discarded[i] = res.discarded[i];
		this->inventory[i] = res.inventory[i];
		if (res.inventory[i] != NULL)
			this->equiped++;
	}
	this->discarded_cout = res.discarded_cout;
	this->name = res.getName();
	return *this;
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    if (this->equiped == 4)
    {
        std::cout << std::endl
        << RED
        << "Dude, you only have two hands!\n"
        << RESET;
    }
    else
    {
        inventory[this->equiped++] = m;
    }
}

void Character::unequip(int idx)
{
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
   	this->inventory[idx]->use(target);
	   this->discarded[this->discarded_cout++] = inventory[idx];
	this->unequip(idx);
}

void    Character::showInventory() const
{
    for (size_t i = 0; i < Character::inventory_size; i++)
    {
        if (this->inventory[i] != NULL)
        {
            std::cout << "#" << i << " "
            << this->inventory[i]->getType() << std::endl;
        }
        else
            std::cout << "#" << i << " empty\n";
    }
}