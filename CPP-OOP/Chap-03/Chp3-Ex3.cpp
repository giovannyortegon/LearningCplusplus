#include<iostream>

using namespace std;

const int NUMROWS = 5;

int main()
{
	float * TwoDinArray[NUMROWS];		// array pointers
	int numColumns;

	cout <<"Enter number of columns: ";
	cin >> numColumns;

	for (int i = 0; i < NUMROWS; i++)
	{
		// allocate column quantity for each row
		TwoDinArray[i] = new float[numColumns];

		// load each column entry with data
		for (int j = 0; j < numColumns; j++)
		{
			TwoDinArray[i][j] = i + j + .05;
			cout <<TwoDinArray[i][j] <<" ";
		}
		cout <<endl;		// print newline between rows
	}

	for (int i = 0; i < NUMROWS; i++)
		delete TwoDinArray[i];			// delete column for each row

	return (0);
}
