# ifndef CLASS_PONY_H
# define CLASS_PONY_H

# include <iostream>
# include <iomanip>
# include <string>

class Pony
{
private:
	std::string name;
	std::string age;
	std::string sex;
	std::string level;
public:
	Pony(void);
	~Pony(void);

	void pony_status(void);
};

#endif