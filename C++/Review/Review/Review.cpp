#include <iostream>
#include <string>
using namespace std;

void cat()
{
	cout << "Meow Meow Meow Meow" << endl;
}

int main()
{
	int a;
	double b;
	bool c;
	char d;
	string e;

	cout << "Type an Integer" << endl;
	cin >> a;

	if(a == 1)
	{
		cout << "A is equal to 1" << endl;
	}
	else if(a > 1)
	{
		cout << "A is greater than 1" << endl;
	}
	else
	{
		cout << "A is less than 1" << endl;
	}

	for(b = 4.5; b < 1000; b++)
	{
		cout << "Swag Swag Swag" << endl;
		cat();
	}
	system("pause");
}