#include "Zombie.hpp"

int	main(void)
{
	int	N = 5;

	Zombie *horde = zombieHorde(N, "Samuel");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce(i + 1);
	}
	delete[] horde;
}