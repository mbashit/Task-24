// Task 24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Array A contains n integer values. Required to create
a new array from the sum of the digits of the corresponding elements of the original array*/

#include <iostream>
using namespace std;

int main()
{
	int size;

	cout << "size of an array" << endl;
	cin >> size;

	int *arr = new int[size];

	for (int i = 0; i < size; i++) {
		cout << "array[" << i << "]" << endl;
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i]<<" "<<endl;
	}
	delete[] arr;
	arr = 0;

	return 0;
}

