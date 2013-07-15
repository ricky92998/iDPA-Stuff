#include <iostream>
#include <string>
using namespace std;



int add (int a, int b, int c, int d)
{
	return (a + b + c + d);
}

int main()
{
	int a = add(4,7,8,32);
	cout << a<<endl;
	system("pause");
}
