#include "Enemy.h"



Enemy::Enemy(void)
{
}


Enemy::~Enemy(void)
{
}

void Enemy::takeDamage(int damage)
{
	enemyHealth = enemyHealth - damage;
	cout << "Slime took " << damage << " damage." << endl;
}
