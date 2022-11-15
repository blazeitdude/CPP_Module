/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:35:07 by ldione            #+#    #+#             */
/*   Updated: 2022/10/22 12:01:58 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

replacer::replacer()
{
}

replacer::~replacer()
{
    this->file_in.close();
}

bool    replacer::connectToFile(std::string filePath)
{
    if (this->file_in.is_open())
        file_in.close();
    if (filePath.empty())
    {
        printError("an empty file name was entered");
        return (false);
    }
    this->file_in.open(filePath);
    if (!file_in)
    {
        printError("could not open the file");
        return(false);
    }
    this->fileName = filePath;
    return (true);
}

bool    replacer::findAndReplace(std::string toReplace, std::string replacement)
{
    std::string result;
    size_t      toReplaceLen = toReplace.length();
    
    if (this->fileName.empty())
    {
        printError("there is no access to the file");
        return (false);
    }
    if (toReplace.empty() || replacement.empty())
    {
        printError("one of the lines is empty");
        return (false);
    }
    result.assign(std::istreambuf_iterator<char>(this->file_in), std::istreambuf_iterator<char>());
    for (size_t i = 0; i < result.length(); i++)
    {
        if (result.compare(i, toReplaceLen, toReplace) == 0)
        {
            result.erase(i, toReplaceLen);
            result.insert(i, replacement);
        }
    }
    return (writeToFile(result));
}

bool replacer::writeToFile(std::string textToFile)
{
    std::ofstream   resultFile;
    std::string     resultFileName = this->fileName;

    resultFileName += ".replace";
    resultFile.open(resultFileName);
    if (!resultFile.is_open())
    {
        printError("failed to open the destination file");
        return(false);
    }
    std::cout << "\033[0;32mthere is an entry in the file \"" << resultFileName << "\"\033[0m\n";
    resultFile << textToFile;
    return (true);
}

void  printError(std::string errorText)
{
    std::cerr << "\033[0;31m" << "Error: "
    << errorText << "\033[0m" << std::endl;
}