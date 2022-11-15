/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldione <ldione@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 21:16:52 by ldione            #+#    #+#             */
/*   Updated: 2022/10/21 21:16:58 by ldione           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class Phonebook
{
  public:
	void	show_welcome_message();
	void	add_contact();
	void	show_search_header(void);
	void	search_contact(void);
	void	search_menu(void);
	Phonebook();
	~Phonebook();
	
  private:
  	Contact 	contacts[8];
	bool		exit;
	size_t 		avail_contact;
	size_t		number_of_entries;
	std::string question;
};

#endif