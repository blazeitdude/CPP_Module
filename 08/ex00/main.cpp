/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:01:12 by ldione            #+#    #+#             */
/*   Updated: 2022/11/06 18:27:02 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

template <typename T>
static void print(T it, T end)
{
    if (it != end)
        std::cout << "value of it: " << *it << std::endl;
    else
        std::cout << "end of array\n";
}

int main(void)
{
    std::vector<int>            vect;
    std::vector<int>::iterator  it;

    for (int i = 0; i < 20; i++)
    {
        vect.push_back(i * i);
    }

    for (int i = 0; i < 20; i++)
        std::cout << vect.at(i) << " ";
    std::cout << std::endl;
    
    std::cout << "there must be example\n";
    it = easyfind(vect, 4);
    print(it, vect.end());

    std::cout << "not found example\n";
    it = easyfind(vect, 523523);
    print(it, vect.end());
}
