/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Typecast.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student,21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 02:12:48 by ldione            #+#    #+#             */
/*   Updated: 2022/10/31 19:53:18 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Typecast.hpp"

Typecast::Typecast( void )
{
    this->type = -1;
    this->charvar = 0;
    this->intvar = 0;
    this->floatvar = 0;
    this->doublevar = 2313;
    std::cout << GREEN
    << "Typecast constructor called\n"
    << RESET;
}

Typecast::Typecast( const Typecast& res )
{
    *this = res;
    std::cout << GREEN
    << "Typecast copy constructor called\n"
    << RESET;
}

Typecast::~Typecast( void )
{
    std::cout << RED
    << "Typecast destructor called\n"
    << RESET;
}

Typecast& Typecast::operator=(const Typecast& res)
{
    this->type = res.type;
    this->charvar = res.charvar;
    this->intvar = res.intvar;
    this->floatvar = res.floatvar;
    this->doublevar = res.doublevar;
    this->copy = res.copy;
    std::cout << "copyed\n";
    return (*this);
}

std::ostream&   operator<<(std::ostream& out, const Typecast& res)
{
    (void)res;
    out << "kek\n";
    return (out);
}

void    Typecast::getTypeOf(char* symbol)
{
    this->copy = symbol;
    if (symbol == NULL)
        throw Typecast::NoINput();
    if (check_special(symbol))
        return ;
    if ((symbol[0] >= '0' && symbol[0] <= '9') || symbol[0] == '-' || symbol[0] == '.')
    {
        this->type = this->handle_numeric(symbol);
        return ;
    }
    if (symbol[1])
        throw Typecast::IncorrectInput();
    this->type = CHAR;
    setVar(this->copy);
}

int Typecast::check_special(char* symbol)
{
    const std::string	special_doubles[] =
	{
		"inf", "+inf", "-inf", "nan"
	};
	const std::string	special_floats[] =
	{
		"inff", "+inff", "-inff", "nanf"
	};
    for (size_t i = 0; i < 4; i++)
    {
        if (symbol == special_doubles[i])
        {
            this->type = DOUBLE;
            setVar(this->copy);
            return (1);
        }
        else if (symbol == special_floats[i])
        {
           this->type = FLOAT;
            setVar(this->copy);
           return (1);
        }
    }
    return (0);
}

int    Typecast::handle_numeric(char* symbol)
{
    int i = 0;
    int dot_count = 0;
    
    if (symbol[0] == '-' && isdigit(symbol[1]))
        i++;
    if (symbol[i] == '.' && (symbol[i + 1] == 'f' || symbol[i + 1] == 0))
        return (NOTYPE);
    while (symbol[i] == '.' || isdigit(symbol[i]))
    {
        if (symbol[i] == '.')
            dot_count++;
        if (dot_count > 1)
        {
            return (NOTYPE);
        }
        i++;
    }
    if (!symbol[i])
    {
        if(dot_count == 1)
            return (DOUBLE);
        else
            return (INT);
    }
    else if (symbol[i] == 'f' && !symbol[i + 1] && dot_count == 1)
        return (FLOAT);
    return (NOTYPE);
}

void    Typecast::setVar(char* symbol)
{
    if (this->type == CHAR)
        this->charvar = symbol[0];
    else if (this->type == INT)
        this->intvar = atoi(symbol);
    else if (this->type == FLOAT)
        this->floatvar = atof(symbol);
    else if (this->type == DOUBLE)
        this->doublevar = atof(symbol);
}

int    Typecast::cast( void )
{
    if (this->type == NOTYPE)
        throw Typecast::IncorrectInput();
    this->printChar();
    this->printInt();
    this->printfloat();
    this->printDouble();
    this->reset();
    return (1);
}

bool    Typecast::isPrintableChar(double input)
{
    if (input - static_cast<int>(input) != 0 || input > 127  || input < 0)
        std::cout << "char: impoissible\n";
    else if (input <= 31 || input == 127)
        std::cout << "char: non displayable\n";
    else
        return (true);
    return (false);
}

void    Typecast::printChar()
{
    if (this->type == CHAR)
        std::cout << "char: " << this->charvar << std::endl;
    else if (this->type == INT)
    {
        if (this->isPrintableChar(this->intvar))
            std::cout << "char: "
            << static_cast<char>(this->intvar)
            << std::endl;
    }
    else if (this->type == FLOAT)
    {
        if (this->isPrintableChar(this->floatvar))
            std::cout << "char: "
            << static_cast<char>(this->floatvar)
            << std::endl;
    }
    else if (this->type == DOUBLE)
    {
        if (this->isPrintableChar(this->doublevar))
            std::cout << "char: "
            << static_cast<char>(this->doublevar)
            << std::endl;
    }
}

bool    Typecast::IsPrintableInt(double input)
{
    return (input <= std::numeric_limits<int>::max()
            && input >= std::numeric_limits<int>::min()
            && input != std::numeric_limits<double>::infinity()
            && input != -std::numeric_limits<double>::infinity()
            && input != std::numeric_limits<double>::quiet_NaN());
}

void    Typecast::printInt()
{
    if (this->type == INT)
        std::cout << "int: " << this->intvar << std::endl;
    else if (this->type == CHAR)
    {
        std::cout << "int: "
        << static_cast<int>(this->charvar)
        << std::endl;
    }
    else if (this->type == FLOAT)
    {
        if (this->IsPrintableInt(this->floatvar))
            std::cout << "int: "
            << static_cast<int>(this->floatvar)
            << std::endl;
        else
            std::cout << "int: impossible\n";
    }
    else if (this->type == DOUBLE)
    {
        if (this->IsPrintableInt(this->doublevar))
            std::cout << "int: "
            << static_cast<int>(this->doublevar)
            << std::endl;
        else
            std::cout << "int: impossible\n";
    }
}

bool    Typecast::isPrintableFloat(double input)
{
    return ((input <= std::numeric_limits<double>::max()
    && input >= std::numeric_limits<double>::min())
    || input == std::numeric_limits<double>::infinity()
    || input == -std::numeric_limits<double>::infinity()
    || std::isnan(input));
}

const char* Typecast::isNeedDot(double input)
{
    if (input - static_cast<int>(input) == 0.0)
        return (".0");
    else
        return ("");   
}

void    Typecast::printfloat()
{
    if (this->type == FLOAT)
        std::cout << "float: "
        << this->floatvar 
        << this->isNeedDot(static_cast<float>(this->floatvar))
        << "f\n";
    else if (this->type == CHAR)
        std::cout << "float: "
        << static_cast<float>(this->charvar)
        << ".0f\n";
    else if (this->type == INT)
        std::cout << "float: "
        << static_cast<float>(this->intvar)
        << ".0f\n";
    else if(this->type == DOUBLE)
    {
        if (this->isPrintableFloat(this->doublevar))
            std::cout << "float: "
            << static_cast<float>(this->doublevar)
            << this->isNeedDot(static_cast<float>(this->doublevar))
            << "f\n";
        else
            std::cout << "float: impossible\n";
    }
}

void    Typecast::printDouble()
{
    if (this->type == DOUBLE)
        std::cout << "double: "
        << this->doublevar
        << this->isNeedDot(this->doublevar)
        << std::endl;
    else if (this->type == CHAR)
        std::cout << "double: "
        << static_cast<double>(this->charvar)
        << this->isNeedDot(static_cast<double>(this->charvar))
        << std::endl;
    else if (this->type == INT)
        std::cout << "double: "
        << static_cast<double>(this->intvar)
        <<  this->isNeedDot(static_cast<double>(this->intvar))
        << std::endl;
    else if (this->type == FLOAT)
        std::cout << "doube: "
        << static_cast<double>(this->floatvar)
        << this->isNeedDot(this->floatvar)
        << std::endl;
}

void    Typecast::reset( void )
{
    this->type = -1;
    this->copy = NULL;
    this->charvar = 0;
    this->intvar = 0;
    this->floatvar = 0;
    this->doublevar = 0;
}