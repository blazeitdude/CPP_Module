#include "Contact.hpp"

Contact::Contact()
{
	for (size_t i = FIRSTNAME; i < DS; i++)
		info[i] = "";
}

Contact::~Contact()
{

}

std::string Contact::fields_name[5] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone number",
	"Darkest Secret"
};

void	Contact::fill_contact(int number)
{
	std::string	buff;

	this->sequence_number = number;
	for (size_t i = FIRSTNAME; i <= DS; i++)
	{
		std::cout << "enter a " << this->fields_name[i] << std::endl;
		getline(std::cin, buff);
		if (buff.empty())
		{
			while (buff.empty())
			{
				std::cout << "the field cannot be empty!\n";
				getline(std::cin, buff);
			}
			this->info[i] = buff;
		}
		else
			this->info[i] = buff;
	}
	std::cout << "the data has been successfully saved." << std::endl;
}

void	Contact::number_shift(int step)
{
		this->sequence_number += step;
		if (this->sequence_number > 8)
			this->sequence_number = 1;
}

void	Contact::display_header(void)
{
	std::cout << "|" << std::setw(10) << this->sequence_number;
	for (size_t i = FIRSTNAME; i <= NICKNAME; i++)
	{
		std::cout << "|";
		if (this->info[i].length() > 10)
		{
			std::cout << this->info[i].substr(0, 9) << ".";
		}
		else
		{
			std::cout << std::setw(10) << this->info[i];
		}
	}
	std::cout << "|" << std::endl;
}

void	Contact::show_info()
{
	std::cout << "# Contact [" << this->sequence_number << "]" << std::endl;
	for (int i = FIRSTNAME; i <= DS; i++)
	{
		std::cout << Contact::fields_name[i] << ": ";
		std::cout << this->info[i] << std::endl;
	}
}