/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:02:11 by ldione            #+#    #+#             */
/*   Updated: 2022/10/15 20:46:06 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    std::string level;
    Harl        garlik;
    
    if (argc != 2)
    {
        std::cerr << "\033[0;31mincorrect number of arguments\033[0m\n";
        return (1);
    }
    garlik.complain(argv[1]);
}