/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:50:13 by ldione            #+#    #+#             */
/*   Updated: 2022/10/10 16:28:39 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{

public:
	Zombie();
	~Zombie();
	Zombie(std::string name);
	void announce(void);
    void            setName(std::string name);
    std::string     getName(void);

private:
	std::string	name;
};

Zombie* newZombie(std::string name);
void     randomChump(std::string name);
Zombie*  zombieHorde(int N, std::string name);

#endif