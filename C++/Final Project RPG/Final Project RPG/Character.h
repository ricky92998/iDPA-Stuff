#pragma once
#include <iostream>
#include <string>
using namespace std;
class Character
{
public:
	Character(void);
	~Character(void);

	int health;
	int damage;
	

	void takeDamage(int damage);
	void dealDamage(Enemy enemy);

};

