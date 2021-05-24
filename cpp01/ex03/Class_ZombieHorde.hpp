# ifndef CLASS_ZOMBIEHORDE_H
# define CLASS_ZOMBIEHORDE_H

#include "Class_Zombie.hpp"

class ZombieHorde
{
private :
	int number;
	Zombie *horde;
public :
	ZombieHorde(int n);
	~ZombieHorde(void);
};

#endif