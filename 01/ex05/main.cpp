/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:54:09 by ldione            #+#    #+#             */
/*   Updated: 2022/10/15 20:44:01 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    std::string level;
    Harl        garlik;
    
    std::cout << "insert level: ";
    std::cin >> level;
    garlik.complain(level);
}