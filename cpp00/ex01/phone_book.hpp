# ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include <iostream>
#include <iomanip>
//#include <string>

class class_pb
{
public:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
public:
	void get_first_name(std::string first_name);
	void get_last_name(std::string last_name);
	void get_nickname(std::string nickname);
	void get_login(std::string login);
	void get_postal_address(std::string postal_address);
	void get_email_address(std::string email_address);
	void get_phone_number(std::string phone_number);
	void get_birthday_date(std::string birthday_date);
	void get_favorite_meal(std::string favorite_meal);
	void get_underwear_color(std::string underwear_color);
	void get_darkest_secret(std::string darkest_secret);
};

# endif