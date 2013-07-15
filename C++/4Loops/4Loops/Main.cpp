#include <iostream>
#include <string>
using namespace std;

void main()
{
	for(int i = 0; i< 100; i++)
	{
		if(i % 3)
		{
			cout << ("Buzz") << endl;
		}
		if (i % 5)
		{
			cout << ("Fizz") << endl;
		}
		if (i % 15)
		{
			cout << ("Fizz Buzz") << endl;
		}
		else 
			cout << i << endl;
		cout << i << endl;
	}
	system("pause");
}