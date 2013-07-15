#pragma once
#include <iostream>
#include <string>
#include "Character.h"
using namespace std;

class Enemy
{
public:
	Enemy(void);
	~Enemy(void);

	int enemyHealth;
	int enemyDamage;

	void takeDamage(int damage);
	void dealDamage(Character enemycharacter);
};

