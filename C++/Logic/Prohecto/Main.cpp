#include <iostream>
#include <string>
using namespace std;

void main()
{
	int level = 6;
	if(level > 4 && level < 6)
	{
		cout << "level 5: woo";
	}
	else if (level ==4 || level ==5)
	{
		cout << "level 4 or 6";
	}
	else if (! (level == 4))
	{
		cout << "not level 4";
	}

	bool a = false;
	bool b = true;

	cout << "a and b: " << (a && b) << endl;
	cout << "a or b: " << (a || b) << endl;
	cout << "not a: " << !a << endl;

	system("pause");
}