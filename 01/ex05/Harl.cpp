/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:22:34 by ldione            #+#    #+#             */
/*   Updated: 2022/10/22 15:01:22 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}
Harl::~Harl()
{
}

int    Harl::getLvlFromString(std::string level)
{
    std::string ListOfLevels[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    for (size_t i = 0; i < 4; i++)
    {   
        if (level == ListOfLevels[i])
            return (i);
    }
    return (-1);
}

void    Harl::debug( void )
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n";
    std::cout << "I really do!\n";
}

void    Harl::info( void )
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money.\n"; 
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void    Harl::warning( void )
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free.\n";
    std::cout <<  "I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error( void )
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::insignificant( void)
{
    std::cout << "[ Probably complaining about insignificant problems ]\n";
}

void    Harl::complain (std::string level)
{
    int digitalLevel = this->getLvlFromString(level);
    
    void (Harl::*complaints[])( void ) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    switch (digitalLevel)
    {
    case -1:
        this->insignificant();
        break;
    case 0:
        (this->*complaints[digitalLevel])();
        break ;
    case 1:
        (this->*complaints[digitalLevel])();
        digitalLevel++;
        break ;
    case 2:
        (this->*complaints[digitalLevel])();
        digitalLevel++;
        break ;
    case 3:
        (this->*complaints[digitalLevel])();
        digitalLevel++;
            break ;
    }
}