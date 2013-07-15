#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

void main()
{
	long secs = time(NULL);
	srand (secs);
	for(int a =1; a < 100000000; a++)
	{
	
	cout << rand();
	}
	system("pause");
}