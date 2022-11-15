/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:45:42 by ldione            #+#    #+#             */
/*   Updated: 2022/11/06 20:53:37 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <random>

int main()
{
Span sp_rand = Span(50);
Span    sp_simple = Span(10);
Span    sp_big = Span(15000);
Span    sp_one = Span(1);

for(int i = 0; i < 10; i++)
    sp_simple.addNumber(i * i);
for (int j = 0; j < 50; j++)
    sp_rand.addNumber(rand());
for (int k = 1; k < 15001; k++)
    sp_big.addNumber(k + k);
sp_one.addNumber(1);

std::cout << GREEN
"\nTest: simple\n"
<< RESET;
sp_simple.printSpan();
std::cout << "Shortest span: " << sp_simple.shortestSpan() << std::endl;
std::cout << "Longest span: " << sp_simple.longestSpan() << std::endl;

std::cout << GREEN
"\n\nTest: random value\n"
<< RESET;
sp_rand.printSpan();
std::cout << "Shortest span: " << sp_rand.shortestSpan() << std::endl;
std::cout << "Longest span: " << sp_rand.longestSpan() << std::endl;

std::cout << GREEN
"\n\nTest: big Span\n"
<< RESET;
std::cout << "Shortest span: " << sp_big.shortestSpan() << std::endl;
std::cout << "Longest span: " << sp_big.longestSpan() << std::endl;

std::cout << GREEN
"\n\nTest: add Range\n"
<< RESET;
std::vector<int>    vc;
Span    sp_range(10);

for (int i = 0; i < 10; i++)
    vc.push_back(i * i + 2);
sp_range.addByRange(vc.begin(), vc.end());
sp_range.printSpan();

std::cout << RED
"\n\nTest: out of bounds by addNumber()\n"
<< RESET;
try {
    sp_simple.addNumber(1);
} catch (const Span::OutOfBoundsException &e) {
    std::cerr << e.what();
}

std::cout << RED
"\n\nTest: out of bounds by addRange()\n"
<< RESET;
try {
    sp_simple.addByRange(vc.begin(), vc.end());
} catch (const Span::OutOfBoundsException &e) {
    std::cerr << e.what();
}

std::cout << RED
"\n\nTest: span with 1 size\n"
<< RESET;
try {
    sp_one.printSpan();
    sp_one.shortestSpan();
    sp_one.longestSpan();
} catch (const std::exception &e) {
    std::cerr << e.what();
}
return 0;
}