/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:28:40 by ldione            #+#    #+#             */
/*   Updated: 2022/10/26 15:16:55 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->hitpoints = 100;
    this->energy = 50;
    this->damage = 20;
    this->onguard = 0;
    std::cout << "ScavTrap constructor\n";
}

ScavTrap::ScavTrap( void )
{
    this->name = "";
	this->hitpoints = 100;
	this->energy = 50;
	this->damage = 20;
	this->initial_hitpoints = this->hitpoints;
	std::cout << "Default constructor for ScavTrap called" << std::endl;
	return;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& res)
{
    this->name = res.name;
    this->hitpoints = res.hitpoints;
    this->energy = res.energy;
    this->damage = res.damage;
    this->onguard = res.onguard;
    std::cout << "operator =\n";
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor\n";
}

void    ScavTrap::attack(const std::string& target)
{
          if (this->energy > 0 && this->hitpoints > 0)
      {
        std::cout << "ScavTrap " << this->name << " attacks "
        << target << " causing "
        << "\033[0;31m" << this->damage << "\033[0m"
        << " points of damage!\n";
        this->energy--;
      }
      else if (this->energy <= 0)
      {
        std::cout << this->name << " \033[0;31mCan't attack because he's energy is equal: "
        << this->energy << "\033[0m\n"; 
      } 
      else if (this->hitpoints <= 0)
      {
        std::cout << this->name << " \033[0;31mCan't attack because he's HP is equal: "
        << this->hitpoints << "\033[0m\n"; 
      }
}

void    ScavTrap::guardGate()
{
    if (this->onguard == true)
    {
        std::cout << this->name << "resigned from the post\n";
        this->onguard = 0;
    }
    else
    {
        std::cout << this->name << "stood guard at the gate\n";
        this->onguard = 1;
    }
}

