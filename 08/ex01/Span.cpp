/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:35:08 by ldione            #+#    #+#             */
/*   Updated: 2022/11/06 20:54:15 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned N) : length(N) {};

Span::Span(const Span& res) : length(res.length), arr(res.arr) {};

Span::~Span() {};

Span&   Span::operator=(const Span& res)
{
    this->length = res.length;
    this->arr = res.arr;
    return (*this);
}

void    Span::addNumber(int number)
{
    if (this->length != arr.size())
        arr.push_back(number);
    else
        throw Span::OutOfBoundsException();
}

void    Span::addByRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    std::vector<int>::iterator it = begin;

    if (this->arr.size() + std::distance(begin, end) > this->length)
        throw Span::OutOfBoundsException();
    while (it != end)
        this->arr.push_back(*(it++));
}

unsigned	Span::getSize() { return this->arr.size(); }

int Span::shortestSpan( void )
{
    if (this->length <= 1 || this->arr.size() <= 1)
        throw Span::CannotFoundException();
    std::vector<int> tmp = this->arr;
    std::vector<int>::iterator  it;
    int ret = 0;
    
    std::sort(tmp.begin(), tmp.end());
    ret = (*(tmp.begin() + 1) - *(tmp.begin()));
    for (it = tmp.begin(); it < tmp.end() - 1; it++)
    {
        if (*(it + 1) - *(it) < ret)
            ret = *(it + 1) - *(it);
    }
    return ret;
}

int Span::longestSpan( void )
{
    if (this->length <= 1 || this->arr.size() <= 1)
        throw Span::CannotFoundException();
    return (*(std::max_element(arr.begin(), arr.end())) -
    *(std::min_element(arr.begin(), arr.end())));
}

void    Span::printSpan()
{
    std::vector<int>::iterator  it;
    std::cout << "---------------------------------------------\n";
    std::cout << "Span size(max): " << this->length << " || Span actual size: "
    << this->arr.size() << std::endl;
    std::cout << "Elements:\n";
    for (it = this->arr.begin(); it < this->arr.end(); it++)
    {
        if (it != arr.end() - 1)
            std::cout << *it << " ";
        else
            std::cout << *it << std::endl;
    }
    std::cout << "---------------------------------------------\n";
}

const char*  Span::OutOfBoundsException::what() const throw()
{
    return ("Error: out of bounds\n");
}

const char* Span::CannotFoundException::what() const throw()
{
    return ("Error: unable to find\n");
}