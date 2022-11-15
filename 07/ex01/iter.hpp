/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student,21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:31:49 by ldione            #+#    #+#             */
/*   Updated: 2022/11/04 01:48:59 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename TI>
void    iter(TI *arr, int length, void (*function)(TI& inp))
{
	for (int i = 0; i < length; i ++)
		function(arr[i]);
}