/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:39:42 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 18:26:23 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
    for (size_t i = 0; i < ideas->size(); i++)
        ideas[i] = "No idea";
    std::cout << "Brain constructor\n";
}

Brain::Brain( const Brain& res)
{
    for (size_t i = 0; i < this->ideas->size(); i++)
        this->ideas[i] = res.getIdea(i);
    std::cout << "Brain copy constructor\n";
}

Brain::~Brain()
{
    std::cout << "Brain destructor\n";
}

Brain&  Brain::operator=(const Brain& res)
{
    for (size_t i = 0; i < this->ideas->size(); i++)
        this->ideas[i] = res.getIdea(i);
    std::cout << "Brain operator \"=\" called\n";
    return (*this);
}

std::ostream&   operator<<(std::ostream& out, const Brain& res)
{
    for (size_t i = 0; i < 100; i++)
    {
        out << res.getIdea(i) << std::endl;
    }
    return (out);
}

std::string Brain::getIdea(size_t i) const
{
    return (this->ideas[i]);
}