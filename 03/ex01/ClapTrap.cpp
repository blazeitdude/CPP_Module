/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:39:17 by ldione            #+#    #+#             */
/*   Updated: 2022/10/25 20:45:49 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
    std::cout << "ClapTrap constructor\n";
}

ClapTrap::ClapTrap(std::string name) : name(name), hitpoints(10), energy(10), damage(0) 
{
    if (name.empty())
        name = "recruit";
    std::cout << this->name << " has born in the greatest fire\n";
}

ClapTrap::~ClapTrap() 
{
    std::cout << this->name << " completely has dyed\n";
}

ClapTrap::ClapTrap( const ClapTrap& res)
{
    this->name = res.name;
    this->hitpoints = res.hitpoints;
    this->energy = res.energy;
    this->damage = res.damage;
    std::cout << "Copy constructor\n";
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& res)
{
    this->name = res.name;
    this->hitpoints = res.hitpoints;
    this->energy = res.energy;
    this->damage = res.damage;
    std::cout << "operator = called\n";
    return (*this);
}

std::ostream&	operator<<( std::ostream& out, const ClapTrap& instance)
{
    out << instance.getName() << std::endl;
    return (out);
}

  void    ClapTrap::attack(const std::string& target)
  {
      if (this->energy > 0 && this->hitpoints > 0)
      {
        std::cout << "ClapTrap " << this->name << " attacks "
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

std::string    ClapTrap::getName( void ) const
{
    return (this->name);
}

void    ClapTrap::takeDamage(unsigned amount)
{
    if (this->hitpoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " received damage " 
        << "in the amount of "
        << "\033[0;31m" << amount << "\033[0m"
        << " his health became equal ";
        this->hitpoints = this->hitpoints - (int)amount > 0 ? this->hitpoints - amount : 0;
        std::cout << this->hitpoints << std::endl;
    }
    else
    {
        std::cout << this->name
        << "\033[0;31m"
        << " is already feeling bad, stop kicking him!"
        << "\033[0m\n";
    }
}

 void    ClapTrap::beRepaired(unsigned amount)
 {
     if (this->energy > 0 && this->hitpoints > 0)
     {
        this->energy--;
        this->hitpoints += amount;
        std::cout << "ClapTrap " << this->name << " received hp "
        << "in the amount of "
        <<  "\033[0;32m" << amount << "\033[0m"
        << " and his health became equal "
        << "\033[0;32m" << this->hitpoints << "\033[0m\n";
     }
     else if (this->energy <= 0)
     {
          std::cout << this->name << " \033[0;31mCan't heal because he's energy is equal: "
           << this->energy << "\033[0m\n"; 
     }
    else if (this->hitpoints <= 0)
    {
        std::cout << this->name << " \033[0;31mCan't heal because he's HP is equal: "
        << this-> hitpoints << "\033[0m\n"; 
    }
 }