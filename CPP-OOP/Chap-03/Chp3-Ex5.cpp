#include<iostream>

using namespace std;

int main()
{
	int dim1, dim2, dim3;
	int *** ThreeDimArray;							// 3D Array

	cout <<"Enter dim 1, dim2, dim 3: ";
	cin >> dim1 >> dim2 >> dim3;

	ThreeDimArray = new int **[dim1];				// allocate dim1

	for (int i = 0; i < dim1; i++)
	{
		ThreeDimArray[i] = new int * [dim2];		// allocate dim2

		for (int j = 0; j < dim2; j++)
		{
			ThreeDimArray[i][j] = new int [dim3];

			for (int k = 0; k < dim3; k++)
			{
				ThreeDimArray[i][j][k] = i + j + k;
				cout <<ThreeDimArray[i][j][k] <<" ";
			}
			cout <<endl;
		}
		cout <<endl;
	}

	/* DEALLOCATE */

	for (int i = 0; i < dim1; i++)
	{
		for (int j = 0; j < dim2; j++)
			delete ThreeDimArray[i][j];				// release dim 3
		delete ThreeDimArray[i];					// release dim 2
	}
	delete ThreeDimArray;							// release dim 1

	return (0);
}
