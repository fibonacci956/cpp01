#include "Zombie.hpp"
int main()
{
    Zombie *nz;
    nz = newZombie("toto");
    delete nz;
    randomChump("tata");
    return (0);
}