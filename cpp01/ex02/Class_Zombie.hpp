# ifndef CLASS_ZOMBIE_H
# define CLASS_ZOMBIE_H

#include <iostream>
#include <cstdlib>
#include <time.h>

class Zombie
{
private :
	std::string name;
	std::string type;
	std::string damage;
	std::string hp;
public :
	Zombie(std::string _name, std::string _type,
			std::string _damage, std::string _hp);
	~Zombie(void);
	void announce(void);
	void print_status(void);
};

#endif