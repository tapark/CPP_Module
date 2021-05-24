#include <iostream>

int main(void)
{
	std::string str;
	std::string *pointer;
	std::string &reference = str;

	pointer = &str;
	str = "HI THIS IS BRAIN";
	std::cout << "print str       : " << str << std::endl;
	std::cout << "print pointer   : " << *pointer << std::endl;
	std::cout << "print reference : " << reference << std::endl;

	str = "changed";
	std::cout << "print str       : " << str << std::endl;
	std::cout << "print pointer   : " << *pointer << std::endl;
	std::cout << "print reference : " << reference << std::endl;
}