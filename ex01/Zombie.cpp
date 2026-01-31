#include "Zombie.hpp"

Zombie::Zombie (void) {
	std::cout << "Zombie Created" << std::endl;
	return;
}


Zombie::~Zombie (void) {
	std::cout << "Zombie Destroyed" << std::endl;
}

void	Zombie::announce(int i) const
{
	std::cout << "Zombie " << this-> _name << " " << i << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}