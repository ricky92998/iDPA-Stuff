#include "Character.h"
#include "Enemy.h"
#include <iostream>
#include <string>
using namespace std;

void main()
{

	/*Classes*/

	Character Knight;
	Knight.damage = 30;
	Knight.health = 150;

	Character Paladin;
	Paladin.damage = 50;
	Paladin.health = 100;

	Character Rouge;
	Rouge.damage = 70;
	Rouge.health = 70;

	Enemy Snake;
	Snake.enemyDamage = 10;
	Snake.enemyHealth = 70;

	cout<< "Pick your Class" << endl;
	cout << "1 for Knight, 2 for Paladin, and 3 for Rouge" << endl;

	int selection;
	cin >> selection;

	if(selection = 1)
	{
		Character Knight;
		Knight.strength = 30;
		Knight.health = 150;
	}
	if(selection = 2)
	{
		Character Paladin;
		Paladin.strength = 50;
		Paladin.health = 100;
	}
	if(selection = 3)
	{
		Character Rouge;
		Rouge.strength = 70;
		Rouge.health = 60;
	}
	else
	{
		cout << "Not a valid choice" << endl;
		system("pause");
	}
	cout << "Watch out its a Snake!" <<endl;
	cout << "1. Attack" << endl; << "2.Do Nothing" << endl;





	

	cin >> selection;





	




	/*Character mycharacter;
	mycharacter.strenght = 100;
	mycharacter.health = 50;
	Character othercharacter;
	othercharacter.strenght = 50;
	othercharacter.health = 75;
	int i = 100;
	int o = 50;*/
}
