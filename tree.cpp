#include <iostream>

using namespace std;

int main()
{
	int coneHeight;

	cout << "Please enter a tree height between 2 and 16: ";
	cin >> coneHeight;

	if (coneHeight < 3 || coneHeight > 15)
	{
		cout << "Height is out of bounds." << endl;
		exit(0);
	}


	/* Tree Cone */
	for (int level = 0; level <= coneHeight - 1; level++)
	{
		for (int space = 0; space < coneHeight - level - 1; space++)
			{
				cout << " ";
			}
		cout << "/";
		for (int coneSpaces = 1; coneSpaces < 2 * level + 1; coneSpaces++)  			{
				cout << " ";
			}
		cout << "\\";
		cout << endl;
	}


	/* Tree Base */
	for (int base = 0; base < 2 * coneHeight; base++)
	{
		cout << "-";
	}


	/* Tree Trunk */
	for (int trunkLevel = 1; trunkLevel <= coneHeight / 2; trunkLevel++)
	{
		cout << endl;
		for (int trunk = 0; trunk < coneHeight - 1; trunk++) 
		{
			cout << " ";
		}
		cout << "||";
	}

	//system("pause");
	return 0;
}
