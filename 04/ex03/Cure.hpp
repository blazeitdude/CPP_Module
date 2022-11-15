/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:34:38 by ldione            #+#    #+#             */
/*   Updated: 2022/10/26 20:47:19 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "color.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
    private:

    public:
    Cure();
    Cure(const Cure& res);
	~Cure();

    Cure& operator=(const Cure& res);
    virtual AMateria*    clone( void ) const;
    virtual void        use(ICharacter& target);
};