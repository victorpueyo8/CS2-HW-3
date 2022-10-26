//Victor Pueyo
//Chapter 9 Homework 3
//Array Expander 

#include <iostream>

using namespace std;

int* newArray(int arr[], const int);
void showArray(int*, const int);

int main()
{
	const int ARRAY_SIZE = 10;
	int array1[ARRAY_SIZE] = { 6, 8, 10, 14, 18, 24, 38, 34, 99, 100 };

	int* secondarr = newArray(array1, ARRAY_SIZE);

	cout << "The values for the first array are:\n";
	showArray(array1, ARRAY_SIZE);

	cout << "\n\nHere are the values for the second array:\n";
	showArray(secondarr, (ARRAY_SIZE * 2));

	cout << endl;

	delete[] secondarr;
	secondarr = nullptr;

	system("pause");
	return 0;

}

int* newArray(int arr[], const int ARRAY_SIZE)
{

	const int SIZE_2 = ARRAY_SIZE * 2;
	int* newArray = new int[SIZE_2];

	for (int index = 0; index < SIZE_2; index++)
	{
		if (index >= ARRAY_SIZE)
		{
			*(newArray + index) = 0;
		}
		else
		{
			*(newArray + index) = arr[index];
		}
	}

	return newArray;
}

void showArray(int* arr, const int ARRAY_SIZE)
{
	for (int index = 0; index < ARRAY_SIZE; index++)
	{
		cout << *(arr + index) << " ";
	}

	return;
}
