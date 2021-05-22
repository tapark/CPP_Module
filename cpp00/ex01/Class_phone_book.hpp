# ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include <iostream>
#include <iomanip>
#include <string>

class phone_book
{
private:
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
	void input_first_name(std::string first_name);
	void input_last_name(std::string last_name);
	void input_nickname(std::string nickname);
	void input_login(std::string login);
	void input_postal_address(std::string postal_address);
	void input_email_address(std::string email_address);
	void input_phone_number(std::string phone_number);
	void input_birthday_date(std::string birthday_date);
	void input_favorite_meal(std::string favorite_meal);
	void input_underwear_color(std::string underwear_color);
	void input_darkest_secret(std::string darkest_secret);

	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nickname(void);
	std::string get_login(void);
	std::string get_postal_address(void);
	std::string get_email_address(void);
	std::string get_phone_number(void);
	std::string get_birthday_date(void);
	std::string get_favorite_meal(void);
	std::string get_underwear_color(void);
	std::string get_darkest_secret(void);
};

# endif