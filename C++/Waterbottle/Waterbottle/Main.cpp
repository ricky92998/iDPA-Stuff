#include <iostream>
#include "NyanCat.h"
#include <string>
using namespace std;

void testNyanCat()
{

	NyanCat* littleNyan = new NyanCat();;
	(*littleNyan).hasLazers = true;
	cout << littleNyan->name << " is nyantastic" << endl;
	littleNyan-> fly();
	littleNyan-> nyan();
	delete littleNyan;
}
void main()
{
	for(int a = 1; a < 1000; a++)
	{
		testNyanCat();
	}
}