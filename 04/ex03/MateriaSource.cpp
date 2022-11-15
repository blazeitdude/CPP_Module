/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:12:59 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 18:08:49 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : learned(0)
{
    for (size_t i = 0; i < MateriaSource::material_size; i++)
        this->v_material[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource& res )
{
    *this = res;
}

MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < MateriaSource::material_size; i++)
    {
        if (this->v_material[i] != NULL)
            delete this->v_material[i];
    }
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& res)
{
    for (size_t i = 0; i < MateriaSource::material_size; i++)
    {
        if (this->v_material[i] != NULL)
            delete v_material[i];
    }

    for (size_t j = 0; j < MateriaSource::material_size; j++)
    {
        this->v_material[j] = res.v_material[j];
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria* material)
{
    if (this->learned == 4)
    {
        std::cout << std::endl
        << RED
        << "enough materials have already been studied"
        << RESET;
    }
    else
    {
        this->v_material[this->learned++] = material;
    }
}

AMateria*   MateriaSource::createMateria(std::string const& type)
{
    for (size_t i = 0; i < MateriaSource::material_size; i++)
    {
     if (this->v_material[i]->getType() == type)
        return (this->v_material[i]->clone());
    }
    return (NULL);
}

void    MateriaSource::showMaterials() const
{
    for (size_t i = 0; i < MateriaSource::material_size; i++)
    {
        if (this->v_material[i] != NULL)
        {
            std::cout << "#" << i << " "
            << this->v_material[i]->getType() << std::endl;
        }
        else
            std::cout << "#" << i << " empty\n";
    }
}