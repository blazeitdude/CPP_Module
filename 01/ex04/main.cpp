/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:34:07 by ldione            #+#    #+#             */
/*   Updated: 2022/10/22 12:02:02 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
     std::cout << "Usage: ./replacer <filepath> <s1> <s2>\n";
     return (1);   
    }
    replacer  edit;

    edit.connectToFile(argv[1]);
    edit.findAndReplace(argv[2], argv[3]);
}