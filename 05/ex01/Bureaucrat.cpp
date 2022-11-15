/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student,21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:00:40 by ldione            #+#    #+#             */
/*   Updated: 2022/10/28 18:21:35 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    checkGrade();
    std::cout << GREEN
    << "Bureaucrat constructor called\n"
    << RESET;
}

Bureaucrat::Bureaucrat( void ) : name("default"), grade(LOWEST_GRADE)
{
    std::cout << GREEN
    << "Bureaucrat constructor called\n"
    << RESET;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << RED
    << "Bureaucrat destructor called\n"
    << RESET;
}

Bureaucrat::Bureaucrat(const Bureaucrat& res)
{
    *this = res;
    std::cout << GREEN
    << "Bureaucrat copy constructor\n"
    << RESET;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& res)
{
    this->grade = res.getGrade();
    std::cout << GREEN
    << "Bureaucrat operator \"=\" called\n"
    << RESET;
    return *this;
}

unsigned Bureaucrat::getGrade( void ) const
{
    return (this->grade);
}

std::string Bureaucrat::getName( void ) const
{
    return (this->name);
}


std::ostream&   operator<<(std::ostream& out, const Bureaucrat& res)
{
    out << res.getName()
    << ", bureaucrat grade "
    << res.getGrade();
    return (out);
}

void    Bureaucrat::checkGrade( void ) const
{
    if (this->getGrade() > HIGHEST_GRADE)
        throw (Bureaucrat::TooHighGrade());
    else if (this->getGrade() < LOWEST_GRADE)
        throw (Bureaucrat::TooLowGrade());
}

void    Bureaucrat::incrementGrade(int balls)
{
    if (balls < 0)
    {
        std::cout << RED
        << "you chose the wrong function, my friend.\n"
        << RESET;
        return ;
    }
    std::cout << GREEN
    << "grade increased by "
    << balls
    << std::endl
    << RESET;
    this->grade += balls;
    checkGrade();
}

void    Bureaucrat::decrementGrade(int balls)
{
    if (balls < 0)
        balls *= -1;
    std::cout << GREEN
    << "grade reduced by "
    << balls
    << std::endl
    << RESET;
    this->grade -= balls;
    this->checkGrade();
}

void    Bureaucrat::signForm(const Form& form)
{
    if (form.getSign() == true)
    {
        std::cout << GREEN
        << this->getName()
        << " signed "
        << form.getName()
        << RESET;
    }
    else
    {
        std::cout << RED
        << this->getName()
        << " couldn't sign "
        << form.getName()
        << " because ";
    }
}

 bool   Form::checkExecForm(const Bureaucrat& bedbug)
 {
    if (this->getSign() == false && bedbug.getGrade() < this->getExecGrade())
        throw(Form::CantExecForm);
 }