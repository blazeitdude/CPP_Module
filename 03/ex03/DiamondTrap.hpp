/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:28:36 by ldione            #+#    #+#             */
/*   Updated: 2022/10/25 21:58:20 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
    DiamondTrap( std::string );
    DiamondTrap(const DiamondTrap& res);
    ~DiamondTrap();
    
    DiamondTrap& operator=(const DiamondTrap& res);

    void    attack(const std::string& target);
    void    whoAmI( void );

private:
    std::string name;
};