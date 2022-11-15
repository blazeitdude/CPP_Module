/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:39:59 by ldione            #+#    #+#             */
/*   Updated: 2022/10/10 16:26:12 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie Bebra;
    
    Zombie *Oleg = newZombie("Oleg");
    Oleg->announce();
    Bebra.announce();
    std::cout << std::endl;
    delete(Oleg);
    std::cout << std::endl;
    randomChump("ded Maksim");
}