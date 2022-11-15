/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:00:15 by ldione            #+#    #+#             */
/*   Updated: 2022/10/27 20:15:31 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>
#include "color.hpp"
#include "Form.hpp"
#define LOWEST_GRADE 1
#define HIGHEST_GRADE 150

class Bureaucrat
{
private:
    const std::string   name;
    int                 grade;
    
public:
    Bureaucrat( void );
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& res);
    ~Bureaucrat();
    
    Bureaucrat& operator=(const Bureaucrat& res);

    std::string getName( void ) const;
    unsigned    getGrade( void ) const;
    void        incrementGrade(int balls);
    void        decrementGrade(int balls);
    void        checkGrade( void ) const;

    void        signForm(const Form& form);
    
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
};

    std::ostream&   operator<<(std::ostream& out, const Bureaucrat& res);