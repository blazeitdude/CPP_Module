/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:35:09 by ldione            #+#    #+#             */
/*   Updated: 2022/10/15 18:52:52 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_REPLACE_HPP
#define FT_REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

class replacer
{
private:
  std::string   fileName;
  std::ifstream file_in;
  
public:
    replacer();
    ~replacer();
    
    bool  connectToFile(std::string filePath);
    bool  findAndReplace(std::string toReplace, std::string replacement);
    bool  writeToFile(std::string textToFile);
    bool	setFile( std::string newFile );
};

void  printError(std::string errorText);
#endif