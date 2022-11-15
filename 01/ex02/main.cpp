/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:42:30 by ldione            #+#    #+#             */
/*   Updated: 2022/10/10 17:00:25 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
int main(void)
{
    std::string welcome_msg = "HI THIS IS BRAIN";
    std::string *stringPTR = &welcome_msg;
    std::string& stringREF = welcome_msg;
    
    std::cout << "string variable -> " << &welcome_msg << std::endl;
    std::cout << "ptr variable -> " << stringPTR << std::endl;
    std::cout << "reference variable -> " << &stringREF << std::endl;
    
    std::cout << std::endl <<  std::setfill('-') << std::setw(50) << '-' << std::endl << std::endl;
    
    std::cout << "value of string variable -> " << welcome_msg << std::endl;
    std::cout << "value of ptr variable -> " << *stringPTR << std::endl;
    std::cout << "value of reference variable -> " << stringREF << std::endl;
}