#include "Class_ZombieHorde.hpp"

int main(void)
{
	int n;

	std::cout << "How many Zombies do you want? : ";
	std::cin >> n;
	if (std::cin.fail())
	{
		std::cout << "Error (invalid_input)" << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
		return (1);
	}
	ZombieHorde horde(n);
	return (0);
}