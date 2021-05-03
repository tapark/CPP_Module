#include "phone_book.hpp"

void add_info(class_pb *pb, int *i)
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
	pb[*i].get_first_name(temp);
	std::cout << "last_name       : ";
	std::cin >> temp;
	pb[*i].get_last_name(temp);
	std::cout << "nickname        : ";
	std::cin >> temp;
	pb[*i].get_nickname(temp);
	std::cout << "login           : ";
	std::cin >> temp;
	pb[*i].get_login(temp);
	std::cout << "postal_address  : ";
	std::cin >> temp;
	pb[*i].get_postal_address(temp);
	std::cout << "email_address   : ";
	std::cin >> temp;
	pb[*i].get_email_address(temp);
	std::cout << "phone_number    : ";
	std::cin >> temp;
	pb[*i].get_phone_number(temp);
	std::cout << "birthday_date   : ";
	std::cin >> temp;
	pb[*i].get_birthday_date(temp);
	std::cout << "favorite_meal   : ";
	std::cin >> temp;
	pb[*i].get_favorite_meal(temp);
	std::cout << "underwear_color : ";
	std::cin >> temp;
	pb[*i].get_underwear_color(temp);
	std::cout << "darkest_secret  : ";
	std::cin >> temp;
	pb[*i].get_darkest_secret(temp);
}

void search_info(class_pb *pb, int *i)
{
	int index;

	index = 0;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	while (index < (*i))
	{
		std::cout << "|         " << index << "|";
		if (pb[index].first_name.length() <= 10)
		{
			std::cout.width(10);
			std::cout << pb[index].first_name << "|";
		else
		{
			cout.width(9);
			std::cout << pb[index].first_name << ".|";
		}
		if (pb[index].last_name.length() <= 10)
		{
			cout.width(10);
			std::cout << pb[index].last_name << "|";
		else
		{
			cout.width(9);
			std::cout << pb[index].last_name << ".|";
		}
		if (pb[index].nickname.length() <= 10)
		{
			cout.width(10);
			std::cout << pb[index].nickname << "|" << std::endl;
		else
		{
			cout.width(9);
			std::cout << pb[index].nickname << ".|" << std::endl;
		}
		index++;
	}
}

int main(int argc, char **argv)
{
	std::string input;
	class_pb pb[8];
	int i;

	while (1)
	{
		std::cout << "Input action (ADD, SEARCH or EXIT)" << std::endl;
		std::cout << "Input : ";
		std::cin >> input;
		if (input == "ADD")
		{
			add_info(pb, &i);
			i++;
		}
		else if (input == "SEARCH")
			;
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Error (wrong_input : " << input << ")" << std::endl;
	}
	return (0);
}