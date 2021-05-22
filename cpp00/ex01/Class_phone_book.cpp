#include "Class_phone_book.hpp"

void phone_book::input_first_name(std::string first_name)
{
	phone_book::first_name = first_name;
}

void phone_book::input_last_name(std::string last_name)
{
	phone_book::last_name = last_name;
}

void phone_book::input_nickname(std::string nickname)
{
	phone_book::nickname = nickname;
}

void phone_book::input_login(std::string login)
{
	phone_book::login = login;
}

void phone_book::input_postal_address(std::string postal_address)
{
	phone_book::postal_address = postal_address;
}

void phone_book::input_email_address(std::string email_address)
{
	phone_book::email_address = email_address;
}

void phone_book::input_phone_number(std::string phone_number)
{
	phone_book::phone_number = phone_number;
}

void phone_book::input_birthday_date(std::string birthday_date)
{
	phone_book::birthday_date = birthday_date;
}

void phone_book::input_favorite_meal(std::string favorite_meal)
{
	phone_book::favorite_meal = favorite_meal;
}

void phone_book::input_underwear_color(std::string underwear_color)
{
	phone_book::underwear_color = underwear_color;
}

void phone_book::input_darkest_secret(std::string darkest_secret)
{
	phone_book::darkest_secret = darkest_secret;
}

std::string	phone_book::get_first_name(void)
{
	return (this->first_name);
}

std::string	phone_book::get_last_name(void)
{
	return(this->last_name);
}

std::string	phone_book::get_nickname(void)
{
	return(this->nickname);
}

std::string phone_book::get_login(void)
{
	return(this->login);
}

std::string phone_book::get_postal_address(void)
{
	return(this->postal_address);
}

std::string phone_book::get_email_address(void)
{
	return(this->email_address);
}

std::string phone_book::get_phone_number(void)
{
	return(this->phone_number);
}

std::string phone_book::get_birthday_date(void)
{
	return(this->birthday_date);
}

std::string phone_book::get_favorite_meal(void)
{
	return(this->favorite_meal);
}

std::string phone_book::get_underwear_color(void)
{
	return(this->underwear_color);
}

std::string phone_book::get_darkest_secret(void)
{
	return(this->darkest_secret);
}