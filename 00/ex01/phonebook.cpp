#include "Phonebook.hpp"
#include <iomanip>
#include <string>
#include <iostream>
#include <limits>
Phonebook::Phonebook()
{
	this->avail_contact = 0;
	this->number_of_entries = 0;
}

Phonebook::~Phonebook()
{

}

void	Phonebook::show_welcome_message()
{
	std::cout << "Welcome to Phonebook!" << std::endl;
}

void	Phonebook::add_contact()
{
	if (avail_contact == 8)
	{
		std::cout << "# the phone book is full. Do you want to delete the oldest contact?" << std::endl;
		while (1)
		{
			std::cout << "[yes, no] > ";
			getline(std::cin, question);
			if (question == "yes")
			{
				this->contacts[this->number_of_entries % 8].fill_contact(this->number_of_entries % 8 + 1);
				this->number_of_entries++;
				break;
			}
			else if (question == "no")
				break;
			else
			{
				std::cout << "# incorrect input" << std::endl;
			}
		}
	}
	else
	{
		this->avail_contact++;
		this->contacts[this->number_of_entries % 8].fill_contact(this->number_of_entries % 8 + 1);
		this->number_of_entries++;
	}
}

void	Phonebook::search_menu(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (size_t i = 0; i < this->avail_contact; i++)
		this->contacts[i].display_header();
	std::cout << "|-------------------------------------------|" << std::endl;
}

void	Phonebook::search_contact(void)
{
	int	index;

	if (this->avail_contact == 0)
		std::cout << "# Add a contact before searching !" << std::endl;
	else
	{
		this->search_menu();
		std::cout << "# Enter Index to display Informations or 0 to Exit\n~";
		while (!(std::cin >> index) || (index < 0 || index > (int)this->avail_contact))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "# Invalid Index\n~";
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (index > 0)
			this->contacts[index - 1].show_info();
	}
}