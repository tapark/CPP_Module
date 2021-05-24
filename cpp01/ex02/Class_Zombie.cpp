#include "Class_Zombie.hpp"

Zombie::Zombie(std::string _name, std::string _type, std::string _damage, std::string _hp)
{
	name = _name;
	type = _type;
	damage = _damage;
	hp = _hp;
	announce();
}

Zombie::~Zombie(void)
{
	std::cout << "[" << name << "(" << type << ")" << "] : ";
	std::cout << "I will be back\n" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "\n[" << name << "(" << type << ")" << "] : ";
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