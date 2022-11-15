/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:12:41 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 15:38:41 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <vector>
#include "color.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria*           v_material[4];
    size_t              learned;
    const static size_t material_size = 4;

public:
    MateriaSource( void );
    MateriaSource( const MateriaSource& res );
    ~MateriaSource();

    MateriaSource&  operator=(const MateriaSource& res);
    
    virtual void        learnMateria(AMateria* material);
    virtual AMateria*   createMateria(std::string const & type);
    void                showMaterials( void ) const;
};


