/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:23:53 by ldione            #+#    #+#             */
/*   Updated: 2022/10/10 19:08:44 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon
{
public:
    const std::string&  getType();
    bool                setType(std::string type);
    Weapon(std::string type);
    ~Weapon();
    
private:
    std::string type;
};

#endif