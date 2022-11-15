/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:33:10 by ldione            #+#    #+#             */
/*   Updated: 2022/10/25 20:38:57 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string name;
    int         hitpoints;
    int        energy;
    unsigned    damage;

public:
    ClapTrap(std::string name);
    ClapTrap( const ClapTrap& res);
    ~ClapTrap();
    std::string getName( void ) const;
    ClapTrap&   operator=( const ClapTrap& rhs );
    
    void    attack(const std::string& target);
    void    takeDamage(unsigned amount);
    void    beRepaired(unsigned amount);
};

std::ostream &	operator<<( std::ostream& out, const ClapTrap& instance);