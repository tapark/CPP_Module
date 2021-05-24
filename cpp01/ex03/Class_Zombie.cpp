#include "Class_Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << "[" << name << "(" << type << ")" << "] : ";
	if (name == "KING")
		std::cout << "I am inevitable" << std::endl;
	else if (name == "PROTEIN")
		std::cout << "P.R.O.T.E.I.N" << std::endl;
	else if (name == "HAMMER")
		std::cout << "Everyone is equal before the HAMMER" << std::endl;
	else if (name == "CAT")
		std::cout << "The most powerful animal on Earth" << std::endl;
}

void Zombie::print_status(void)
{
	std::cout << "----------------------------------" << std::endl;
	std::cout << "name   : " << name << std::endl;
	std::cout << "type   : " << type << std::endl;
	std::cout << "damage : " << damage << std::endl;
	std::cout << "hp     : " << hp << std::endl;
	std::cout << "----------------------------------" << std::endl;
}

void Zombie::set_zombie(std::string _name)
{
	name = _name;
	if (name == "KING")
	{
		type = "Legend";
		damage = "9999";
		hp = "9999";
	}
	else if (name == "PROTEIN")
	{
		type = "Tanker";
		damage = "1";
		hp = "9999";
	}
	else if (name == "HAMMER")
	{
		type = "Attacker";
		damage = "9999";
		hp = "1";
	}
	else if (name == "CAT")
	{
		type = "Cute";
		damage = "1";
		hp = "1";
	}
}

std::string Zombie::randomChump(void)
{
	int index;
	std::string dest;

	std::string name[4] = {"KING", "PROTEIN", "HAMMER", "CAT"};
	srand(time(NULL));
	index = rand() % 10;
	if (index == 0)
		dest = name[0];
	else if (index < 4)
		dest = name[1];
	else if (index < 7)
		dest = name[2];
	else
		dest = name[3];
	return (dest);
}