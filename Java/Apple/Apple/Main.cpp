#include  <iostream>
#include  <string>
using namespace std;

void main() 
{
	int a;
	cin >> a;
	while(a != 1)
	{
		if(a % 2 == 0)
		{
			a = a/2;
		}

		else
		{
			a = a*3+1;
		}
		cout << a << endl;
	}


	system("pause");

}
