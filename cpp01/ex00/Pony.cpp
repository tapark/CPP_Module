#include "Class_Pony.hpp"

void ponyOnTheHeap(void)
{
	Pony *pony;

	pony = new Pony();
	pony->pony_status();
	delete(pony);
}

void ponyOnTheStack(void)
{
	Pony pony;
	pony.pony_status();
}

int main(void)
{
	std::cout << "\n[Welcome to Heap World]" << std::endl;
	ponyOnTheHeap();
	std::cout << "\n[Welcome to Stack World]" << std::endl;
	ponyOnTheStack();
	return (0);
}