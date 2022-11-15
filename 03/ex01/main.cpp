/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:05:12 by ldione            #+#    #+#             */
/*   Updated: 2022/10/25 20:46:08 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void )
{
    ScavTrap    bigefim("EFIM!");
	ScavTrap    efim("Efim");
    
    efim = bigefim;
    std::cout << bigefim;

	efim.attack("School Mac");
    std::cout << "taking damage\n";
	efim.takeDamage(6);
    std::cout << "repairing\n";
	efim.beRepaired(4);
    std::cout << "taking damage\n";
	efim.takeDamage(3);
    std::cout << "repairing\n";
	efim.beRepaired(8);
    std::cout << "taking damage\n";
	efim.takeDamage(17);
    efim.takeDamage(100);
    efim.beRepaired(100);
}
