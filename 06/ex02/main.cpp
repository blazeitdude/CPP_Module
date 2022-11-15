/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student,21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:32:49 by ldione            #+#    #+#             */
/*   Updated: 2022/10/31 21:46:15 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

static Base* generate(void)
{
    int i = rand();
    if (i % 3 == 0)
        return (new A);
    else if (i % 3 == 1)
        return (new B);
    else if (i % 3 == 2)
        return (new C);
    return (NULL);
}

static void identify(Base* p)
{
    A   *a;
    if ((a = dynamic_cast<A*>(p)))
        std::cout << BLUE
        "class type: A\n"
        << RESET;
    B   *b;
    if ((b = dynamic_cast<B*>(p)))
        std::cout << GREEN
        "class type: B\n"
        << RESET;
    C   *c;
    if ((c = dynamic_cast<C*>(p)))
        std::cout << YELLOW
        "class type: C\n"
        << RESET;
}

static void identify(Base& p)
{
    try
    {
        A&  a = dynamic_cast<A&>(p);
        (void) a;
        std::cout << BLUE
        "class type: A\n"
        << RESET;
    }
    catch(const std::exception& e)
    {
        (void) e;
    }
    try
    {
        B&  b = dynamic_cast<B&>(p);
        (void) b;
        std::cout << GREEN
        "class type: B\n"
        << RESET;
    }
    catch(const std::exception& e)
    {
        (void) e;
    }
    try
    {
        C&  c = dynamic_cast<C&>(p);
        (void) c;
       std::cout << YELLOW
        "class type: C\n"
        << RESET;
    }
    catch(const std::exception& e)
    {
        (void) e;
    }
}


int main(void)
{
    	Base	*base;

	std::cout << "Identifying with pointers" << std::endl;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	std::cout << std::endl << "Identifying with references" << std::endl
		<< std::endl;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;
}