#include "HumanA.hpp"

int main()
{
    {
        Weapon fisrt = Weapon("AK47");
        HumanA billy("Billy", fisrt);
        billy.attack();
        fisrt.setType("AK47");
        billy.attack();
    }
    {
        Weapon second = Weapon("FAL");
        HumanB jim("Jim");
		jim.attack();
        jim.setWeapon(second);
        jim.attack();
        second.setType("some other type of weapon");
        jim.attack();
    }
    return 0;
}