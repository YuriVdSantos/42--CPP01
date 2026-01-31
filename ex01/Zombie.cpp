#include "Zombie.hpp"

Zombie::Zombie (void) {
	std::cout << "Zombie Created" << std::endl;
	return;
}


Zombie::~Zombie (void) {
	std::cout << "Zombie Destroyed" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}