/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Typecast.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student,21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 02:04:53 by ldione            #+#    #+#             */
/*   Updated: 2022/10/31 19:54:13 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define NOTYPE -1
#define CHAR   6
#define INT    7
#define FLOAT  8
#define DOUBLE 9

#include "color.hpp"
#include <iostream>
#include <stdexcept>
#include <cstring>
#include <cstdlib>
#include <limits>
#include <cmath>

class Typecast
{
public:
    Typecast( void );
    Typecast( const Typecast& res );
    ~Typecast( void );

    Typecast&   operator=(const Typecast& res);
    
    void        getTypeOf(char* symbol);
    int         cast( void );

private:
    int         type;
    char        *copy;
    char        charvar;
    int         intvar;
    float       floatvar;
    double      doublevar;

    void        reset();
    int         handle_numeric(char* symbol);
    int         check_special(char* symbol);
    void        setVar(char *symbol);
    void        printChar();
    bool        isPrintableChar(double input);
    void        printInt();
    bool        IsPrintableInt(double input);
    void        printfloat();
    bool        isPrintableFloat(double input);
    void        printDouble();
    const char* isNeedDot(double input);

public:
    class NoINput: public std::exception
    {
    public:
        virtual const char  *what( void ) const throw()
        {
            return ("error: no input");
        }
    };
    class IncorrectInput: public std::exception
    {
    public:
        virtual const char  *what( void ) const throw()
        {
            return ("error: incorrect input");
        }  
    };
};

std::ostream&   operator<<(std::ostream& out, const Typecast& res);