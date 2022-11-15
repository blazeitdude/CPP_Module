/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student,21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:58:27 by ldione            #+#    #+#             */
/*   Updated: 2022/10/31 20:11:48 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

static uintptr_t   serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

static Data*   deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}


int main( void )
{
    uintptr_t  pointer;
    Data       *data = new Data;
    Data        *new_data;
    data->data = "lol";
    pointer = serialize(data);
    new_data = deserialize(pointer);
    std::cout << "new_data->data: " << new_data->data << std::endl;
}