# ifndef CLASS_ZOMBIEEVENT_H
# define CLASS_ZOMBIEEVENT_H

#include <iostream>
#include "Class_Zombie.hpp"

class ZombieEvent
{
private :
	std::string type;
	std::string damage;
	std::string hp;
public :
	void setZombieType(std::string name);
	Zombie* newZombie(std::string name);
	std::string randomChump(void);
};

# endif