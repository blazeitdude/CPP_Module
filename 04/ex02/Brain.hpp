/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:37:37 by ldione            #+#    #+#             */
/*   Updated: 2022/10/26 17:28:40 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Brain
{
public:
    std::string ideas[100];

    Brain( void );
    Brain( const Brain& res);
    ~Brain();
    
    Brain&  operator=(const Brain& res);

    std::string getIdea(size_t i) const;
private:
};

std::ostream&   operator<<(std::ostream& out, const Brain& res);