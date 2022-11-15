/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:52:54 by ldione            #+#    #+#             */
/*   Updated: 2022/10/10 16:40:25 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static void    announceAllZombies(Zombie *arr, size_t   count)
{
    std::cout << "\033[0;32mWelcome the zombie horde!\033[0m\n";
    std::cout << "don't be surprised that they have the same names - they're zombies :)\n";
    for (size_t i = 0; i < count; i++)
        arr[i].announce();
    std::cout << "zombies went to do the usual zombie business\n";
}

int main(void)
{
    size_t  zombieNumb;
    std::cout << "how many zombies are there in the area?\n";
    std::cin >> zombieNumb;
    Zombie  *arr = zombieHorde(zombieNumb, "Andrey");
    announceAllZombies(arr, zombieNumb);
    delete [] (arr);
    return (0);
}