#include<iostream>

using namespace std;

struct collection
{
	int x;
	float y;
};

int main()
{
	int numElements;
	int * intArray;					// pointer declaration
	collection * collectionArray;	// to eventual arrays

	cout <<"How many elements would you like? " <<flush;
	cin >> numElements;

	intArray = new int[numElements];	// allocate array bodies
	collectionArray = new collection[numElements];

	// load each array with values
	for (int i = 0; i < numElements; i++)
	{
		intArray[i] = i;		// load each array w values
		collectionArray[i].x = i;	// using array notation []
		collectionArray[i].y = i + .5;

		// alternatively usr ptr notation to print two values
		cout <<* (intArray + 1) <<" ";
		cout <<(* (collectionArray + i)).y <<endl;
	}

	delete intArray;
	delete [] collectionArray;

	return (0);
}
