#include "Class_ZombieEvent.hpp"

std::string ZombieEvent::randomChump(void)
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

void ZombieEvent::setZombieType(std::string name)
{
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

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie;

	ZombieEvent::setZombieType(name);
	zombie = new Zombie(name, type, damage, hp);
	return (zombie);
}