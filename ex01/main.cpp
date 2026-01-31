#include "Zombie.hpp"


int	main(void)
{
	int n = 10;
	
    Zombie *horde = zombieHorde(n, "Jhon Carther");
    if (horde == NULL)
        return (1);

	for (int i = 0; i < n; i++)
	{
		horde[i].announce();
	}

	delete[] horde;

    return (0);
}