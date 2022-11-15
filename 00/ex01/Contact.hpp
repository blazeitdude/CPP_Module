#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>
#include <iomanip>
class Contact
{
	public:
		void	fill_contact(int number);
		void	number_shift(int step);
		void	display_header(void);
		void	show_info();
		Contact();
		~Contact();

	private:
		int 		sequence_number;
		std::string	info[5];
		enum fields_dig
		{
			FIRSTNAME = 0,
			LASTNAME,
			NICKNAME,
			PHONE_NUMBER,
			DS
		};
		static std::string fields_name[5];
};

#endif