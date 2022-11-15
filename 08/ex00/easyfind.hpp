/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:58:44 by ldione            #+#    #+#             */
/*   Updated: 2022/11/06 18:19:48 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator    easyfind(T& container, int to_find)
{
    typename T::iterator ret = find(container.begin(), container.end(), to_find);
    if (ret == container.end())
        return (container.end());
    return (ret);
}