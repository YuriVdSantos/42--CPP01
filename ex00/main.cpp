#include "Zombie.hpp"

int main(void)
{
	randomChump("Cyber");
	Zombie *Jayce = newZombie("Jayce");
	Jayce->announce();
	delete Jayce;
}