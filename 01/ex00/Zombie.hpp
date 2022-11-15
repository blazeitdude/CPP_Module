/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:40:04 by ldione            #+#    #+#             */
/*   Updated: 2022/10/10 16:26:50 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{

public:
	void announce(void);
	Zombie();
	~Zombie();
	Zombie(std::string name);

private:
	std::string	name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif