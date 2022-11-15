#include "Phonebook.hpp"

int main(void)
{
	Phonebook	phonebook;
	bool		exit = false;
	std::string command;

	phonebook.show_welcome_message();
	while (!exit)
	{
		std::cout << "> ";
		getline(std::cin, command);
		if (command == "ADD")
		{
			phonebook.add_contact();
		}
		else if (command == "SEARCH")
		{
			phonebook.search_contact();
		}
		else if (command == "EXIT")
		{
			std::cout << "exit" << std::endl;
			exit = true;
		}
		command.clear();
	}
	return (0);
}