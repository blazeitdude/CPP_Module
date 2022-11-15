/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student,21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:17:41 by ldione            #+#    #+#             */
/*   Updated: 2022/11/04 01:28:52 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename TS>
void    swap(TS& a, TS& b)
{
    TS   c = a;
    a = b;
    b = c;
}

template<typename TMN>
TMN&    min(TMN& a, TMN& b)
{
    return (a < b ? a : b);
}

template<typename TMX>
TMX&    max(TMX& a, TMX& b)
{
    return (a > b ? a : b);
}