#include "Character.h"
#include "Enemy.h"
Character::Character(void)
{

}


Character::~Character(void)
{
	health < 1;
	cout << "You lose" << endl;
}

void Character::takeDamage(int damage)
{
	health = health - damage;
	cout << "Character took " << damage << " damage" << endl;
}

