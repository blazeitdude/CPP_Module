/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:05:12 by ldione            #+#    #+#             */
/*   Updated: 2022/10/25 21:12:02 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void present(ClapTrap& maks);
void present(ScavTrap& efim);
void present(FragTrap& bohdan);

int	main( void )
{
    ScavTrap    bigefim("EFIM!");
	ScavTrap    efim("Efim");
    ClapTrap    maks("Maks");
    FragTrap    bohdan("Bahdan");

    
    efim = bigefim;
    std::cout << bigefim;
    std::cout << "\n\n";
    present(efim);
    std::cout << "\n\n";
    present(maks);
    std::cout << "\n\n";
    present(bohdan);
    std::cout << "\n\n";
}


void present(ScavTrap& efim)
{
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
    efim.guardGate();
    efim.guardGate();
}

void present(ClapTrap& maks)
{
    maks.attack("School Mac");
    std::cout << "taking damage\n";
	maks.takeDamage(6);
    std::cout << "repairing\n";
	maks.beRepaired(4);
    std::cout << "taking damage\n";
	maks.takeDamage(3);
    std::cout << "repairing\n";
	maks.beRepaired(8);
    std::cout << "taking damage\n";
	maks.takeDamage(17);
    maks.takeDamage(100);
    maks.beRepaired(100);
}

void present(FragTrap& bohdan)
{
    bohdan.attack("School Mac");
    std::cout << "taking damage\n";
	bohdan.takeDamage(6);
    std::cout << "repairing\n";
	bohdan.beRepaired(4);
    std::cout << "taking damage\n";
	bohdan.takeDamage(3);
    std::cout << "repairing\n";
	bohdan.beRepaired(8);
    std::cout << "taking damage\n";
	bohdan.takeDamage(17);
    bohdan.takeDamage(100);
    bohdan.beRepaired(100);
    bohdan.highFiveGuys();
}
