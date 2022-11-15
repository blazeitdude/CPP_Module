/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:27:56 by ldione            #+#    #+#             */
/*   Updated: 2022/10/26 15:17:08 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap(std::string name);
    ScavTrap( void );
    ~ScavTrap();
    ScavTrap&   operator=(const ScavTrap& res);
    
    void    attack(const std::string& target);
    void guardGate();
    
protected:
    int     initial_hitpoints;
    bool    onguard;
};