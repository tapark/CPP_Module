#include "Class_ZombieEvent.hpp"

int main(void)
{
	Zombie *zombie;
	ZombieEvent event;
	std::string random_name;

	random_name = event.randomChump();
	zombie = event.newZombie(random_name);
	zombie->print_status();
	delete zombie;
	return (0);
}