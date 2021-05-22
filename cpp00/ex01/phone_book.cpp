#include "Class_phone_book.hpp"

void add_info(phone_book *pb, int *i)
{
	std::string temp;

	if (*i > 7)
	{
		std::cout << "Error (disk full)" << std::endl;
		(*i) = 7;
		return ;
	}
	std::cout << "(" << (*i) + 1 << "/8" << ") " ;
	std::cout << "Input your information" << std::endl;
	std::cout << "first_name      : ";
	std::cin >> temp;
	pb[*i].input_first_name(temp);
	std::cout << "last_name       : ";
	std::cin >> temp;
	pb[*i].input_last_name(temp);
	std::cout << "nickname        : ";
	std::cin >> temp;
	pb[*i].input_nickname(temp);
	std::cout << "login           : ";
	std::cin >> temp;
	pb[*i].input_login(temp);
	std::cout << "postal_address  : ";
	std::cin >> temp;
	pb[*i].input_postal_address(temp);
	std::cout << "email_address   : ";
	std::cin >> temp;
	pb[*i].input_email_address(temp);
	std::cout << "phone_number    : ";
	std::cin >> temp;
	pb[*i].input_phone_number(temp);
	std::cout << "birthday_date   : ";
	std::cin >> temp;
	pb[*i].input_birthday_date(temp);
	std::cout << "favorite_meal   : ";
	std::cin >> temp;
	pb[*i].input_favorite_meal(temp);
	std::cout << "underwear_color : ";
	std::cin >> temp;
	pb[*i].input_underwear_color(temp);
	std::cout << "darkest_secret  : ";
	std::cin >> temp;
	pb[*i].input_darkest_secret(temp);
}

void search_info(phone_book *pb, int i)
{
	int index;
	int input;

	index = 0;
	if (i < 1)
	{
		std::cout << "Error (no data for search)" << std::endl;
		return ;
	}
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	while (index < i)
	{
		std::cout << "|         " << index << "|";
		if (pb[index].get_first_name().length() <= 10)
			std::cout << std::setw(10) << pb[index].get_first_name() << "|";
		else
			std::cout << std::setw(9) << pb[index].get_first_name().substr(0, 9) << ".|";
		if (pb[index].get_last_name().length() <= 10)
			std::cout << std::setw(10) << pb[index].get_last_name() << "|";
		else
			std::cout << std::setw(9) << pb[index].get_last_name().substr(0, 9) << ".|";
		if (pb[index].get_nickname().length() <= 10)
			std::cout << std::setw(10) << pb[index].get_nickname() << "|" << std::endl;
		else
			std::cout << std::setw(9) << pb[index].get_nickname().substr(0, 9) << ".|" << std::endl;
		index++;
	}
	std::cout << "Input Index for Verification (0 ~ " << (i - 1) << ")" << std::endl;
	std::cout << "Input : ";
	std::cin >> input;
	if (std::cin.fail())
	{
		std::cout << "Error (invalid_input)" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		return ;
	}
	if (input < 0 || (i - 1) < input)
		std::cout << "Error (wrong_input : " << input << ")" << std::endl;
	else
	{
		std::cout << "first_name      : " << pb[input].get_first_name() << std::endl;
		std::cout << "last_name       : " << pb[input].get_last_name() << std::endl;
		std::cout << "nickname        : " << pb[input].get_nickname() << std::endl;
		std::cout << "login           : " << pb[input].get_login() << std::endl;
		std::cout << "postal_address  : " << pb[input].get_postal_address() << std::endl;
		std::cout << "email_address   : " << pb[input].get_email_address() << std::endl;
		std::cout << "phone_number    : " << pb[input].get_phone_number() << std::endl;
		std::cout << "birthday_date   : " << pb[input].get_birthday_date() << std::endl;
		std::cout << "favorite_meal   : " << pb[input].get_favorite_meal() << std::endl;
		std::cout << "underwear_color : " << pb[input].get_underwear_color() << std::endl;
		std::cout << "darkest_secret  : " << pb[input].get_darkest_secret() << std::endl;
	}
}

int main(int argc, char **argv)
{
	std::string input;
	phone_book pb[8];
	int i;

	while (1)
	{
		std::cout << "Input Action (ADD, SEARCH or EXIT)" << std::endl;
		std::cout << "Input : ";
		std::cin >> input;
		if (input == "ADD")
		{
			add_info(pb, &i);
			i++;
		}
		else if (input == "SEARCH")
			search_info(pb, i);
		else if (input == "EXIT")
			exit(0);
		else
			std::cout << "Error (wrong_input : " << input << ")" << std::endl;
	}
	return (0);
}