#include "Class_ZombieHorde.hpp"
#include <stdlib.h>

ZombieHorde::ZombieHorde(int n)
{
	int i;
	std::string random_name;

	i = 0;
	horde = new Zombie[n];
	number = n;
	while (i < n)
	{
		std::cout << "\n" << i + 1 << ". ";
		random_name = horde[i].randomChump();
		horde[i].set_zombie(random_name);
		horde[i].announce();
		horde[i].print_status();
		i++;
//		sleep(1);
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] horde;
}