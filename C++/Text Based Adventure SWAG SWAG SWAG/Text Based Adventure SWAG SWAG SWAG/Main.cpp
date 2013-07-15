#include <iostream>
#include <string>
using namespace std;

void main()
{
	cout << "You are alone, washed ashore after crashlanding im the ocean" << endl;
	cout << "1.Scavenge for food" << endl;
	cout << "2.Look for a water source" << endl;
	cout << "3.Start to buid a hut out of twigs and sticks" << endl;

	int selections;
	cin >> selections;

	if (selections == 1)
	{
		cout << "You find some red berries in a bush. Do you eat the berries(1) or continue searching(2)?" << endl;
		int selections;
		cin >> selections;

		if (selections == 1)
		{
			cout << "You eat the berries, you soon fall to the ground and die" << endl;
		}
		if (selections == 2)
		{
			cout << "You continue searching and find a bannana tree, you eat bannanas until you feel full. What do you do now?" << endl;
			cout << "1. You build a shelter." << endl;
			cout << "2. You search for water." << endl;

			int selections ;
			cin >> selections;
				if (selections ==1)
				{
					cout << "You start to build a shelter but grow dehydrated and die while building" << endl;
				}
				if (selections == 2)
				{
					cout << "You find a pool of clear stagnant water. Do you drink it(1), or continue looking(2)?" << endl;
				}

				int selections;
				cin >> selections;
					if (selections == 1)
					{
						cout << "You fall ill with a fever and die" << endl;
					}
					if (selections == 2)
					{
						cout << "You find a flowing stream with delicious water, a helicopter arrives and you escape the island." << endl;
						cout << endl << endl << "YOU WIN!"
					}
		}
	}
	if(selections == 2)
	{
		cout << "You find a pool of clear stagnant water. Do you drink it(1), or continue looking(2)?" << endl;
	}
	if(selections == 3)
	{
		cout << "You start to build a hut against a tree, do you build it in the woods(1) or the beach(2)?" << endl;
	}
	system("pause");
}