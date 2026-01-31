#include "Zombie.hpp"

int main(void)
{
	randomChump("Jassey");
	Zombie *Otto = newZombie("Otto");
	Otto->announce();
	delete Otto;
}