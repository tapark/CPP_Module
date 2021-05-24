#include "Class_Pony.hpp"

Pony::Pony(void)
{
	name = "Pony Tail";
	age = "42";
	sex = "female";
	level = "Lv.42";
	std::cout << "Pony's here" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Pony's gone\n" << std::endl;
}

void Pony::pony_status(void)
{
	std::cout << "-----------------" << std::endl;
	std::cout << "name  : "<< name << std::endl;
	std::cout << "age   : " << age << std::endl;
	std::cout << "sex   : " << sex << std::endl;
	std::cout << "level : " << level << std::endl;
	std::cout << "-----------------" << std::endl;
}