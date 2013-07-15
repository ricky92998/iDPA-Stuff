#include <iostream>
#include <string>
using namespace std;

void main()
{
	 int* arr = new int[3];
    
    //fill the array elements
    arr[0] = 90;
    arr[1] = 90;
    arr[2] = 90;
    cout << arr[0] << endl;  //print out the first element

	cout << " The address of the array in dynamic memory: " << arr[0] << endl;
    for(;;)
	{
		arr= new int [1000];
	}


    //delete the array to free space.
    delete[] arr;
	system("pause");
}