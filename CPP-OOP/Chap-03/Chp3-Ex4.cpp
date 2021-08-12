#include<iostream>

using namespace std;

int main()
{
	int numRows, numColumns;
	float **TwoDimArray;					// pointer to pointer

	cout <<"Enter number of rows: " <<flush;
	cin >> numRows;

	TwoDimArray = new float * [numRows];	// allocate row ptr

	cout << "Enter number of columns: ";
	cin >> numColumns;

	for (int i = 0; i < numRows; i++)
	{
		TwoDimArray[i] = new float [numColumns];
		// load each column entry with data
		for (int j = 0; j < numColumns; j++)
		{
			TwoDimArray[i][j] = i + j + .05;
			cout << TwoDimArray[i][j] <<" ";
		}
		cout <<endl;						// print new line between rows
	}

	for(int i = 0; i < numRows; i++)
		delete TwoDimArray[i];				// delete columns for each row

	delete TwoDimArray;						// delete allocated rows

	return (0);
}
