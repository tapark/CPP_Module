# ifndef CLASS_ZOMBIE_H
# define CLASS_ZOMBIE_H

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <iomanip>
#include <string>
#include <stdlib.h>

class Zombie
{
private :
	std::string name;
	std::string type;
	std::string damage;
	std::string hp;
public :
	void announce(void);
	void print_status(void);
	void set_zombie(std::string _name);
	std::string randomChump(void);
};

#endif