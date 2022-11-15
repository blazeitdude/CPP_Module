/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student,21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:44:59 by ldione            #+#    #+#             */
/*   Updated: 2022/10/28 18:19:39 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "color.hpp"
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
public:
    Form( void );
    Form (std::string name, int grade, int exec_grade);
    Form(const Form& res);
    ~Form();

    Form&   operator=(const Form& res);
    
    std::string getName( void ) const;
    bool        getSign( void ) const;
    int         getGrade( void ) const;
    int         getExecGrade( void ) const;

    void        beSigned(const Bureaucrat& bedbug);
    bool        checkExecForm(const Bureaucrat& bedbug);

private:
    const std::string   name;
    bool                sign;
    const int           grade;
    const int           exec_grade;

public:
        class TooHighGrade: public std::exception
    {
    public:
        virtual const char    *what( void ) const throw()
        {
          return ("too high rating, cancellation\n");   
        }
    };
    class TooLowGrade: public std::exception
    {
    public:
        virtual const char    *what ( void ) const throw()
        {
            return ("Dude, the score is too low!\n");
        }
    };
    class CantExecForm : public std::exception
    {
    public:
      virtual const char    *what ( void ) const throw()
      {
        return ("unable to complete the form\n");
      }  
    };
};

std::ostream&   operator<<(std::ostream& out, const Form& res);