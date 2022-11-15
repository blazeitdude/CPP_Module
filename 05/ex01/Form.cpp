/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student,21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:47:48 by ldione            #+#    #+#             */
/*   Updated: 2022/10/28 18:08:27 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : name("default"), sign(false), grade(1), exec_grade(1)
{
    std::cout << GREEN
    << "Form constructor called\n"
    << RESET;
}

Form::Form(std::string name, int grade, int exec_grade)
: name(name), sign(false), grade(grade), exec_grade(exec_grade)
{
    std::cout << GREEN
    << "Form constructor called\n"
    << RESET;
}

Form::Form(const Form& res)
: name("copy_default"), grade(1), exec_grade(1)
{
    this->sign = res.getSign();
    std::cout << RED
    << "copy constructor : some variables have a const modifier\n"
    << RESET;
}

Form&   Form::operator=(const Form& res)
{
    this->sign = res.getSign();
    std::cout << RED
    << "operator = : some variables have a const modifier\n"
    << RESET;
}

std::string Form::getName( void ) const
{
    return (this->name);
}

bool Form::getSign( void ) const
{
    return (this->sign);
}

int Form::getGrade( void ) const
{
    return (this->grade);
}

int Form::getExecGrade( void ) const
{
    return (this->exec_grade);
}

std::ostream&   operator<<(std::ostream& out, const Form& res)
{
    out << "name of Formholder " << res.getName()
    << "sign is " << res.getSign()
    << "grade is " << res.getGrade()
    << "exec_grade is" << res.getExecGrade()
    << std::endl;
}

 void   Form::beSigned(const Bureaucrat& bedbug)
 {
    bedbug.checkGrade();
    if (bedbug.getGrade() > this->getGrade())
        this->sign = true;
    else
    {
        std::cout << RED
        << "a bureaucrat's assessment is not suitable for a signature!\n"
        << RESET;
    }
 }