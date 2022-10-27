// Task 24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Two arrays of integers A and B are given, containing n elements each.
Send to array C first the values of the elements of the array, where there are more
elements with the maximum sum of digits, then the values of the elements of another
array.*/

#include <iostream>
using namespace std;

int main() {
	int n1, n2;

	cout << "enter size of first array" << endl;
	cin >> n1;

	int* a = new int[n1];
	cout << "Enter elements of first array:" << endl;
	for (int i = 0; i < n1; i++) {
		cin >> a[i];
	}
	cout << "enter the size of second array" << endl;
	cin >> n2;
	int* b = new int[n2];
	cout << "Enter elements of second array:" << endl;
	for (int j = 0; j < n2; j++) {
		cin >> b[j];
	}
	int m = max(n1, n2);
	int* ans = new int(m);
	int i = n1 - 1;
	int j = n2 - 1;
	int k = m - 1;
	int carry = 0;

	while (k >= 0) {
		cout << "sum of elements of the arrays: ";
		int c = a[i] + b[j] + carry;
		
		int q = c / 10;
		int r = c % 10;
		ans[k] = r;
		carry = q;
		i--;
		j--;
		k--;

	}
	if (carry != 0) {
		cout <<carry<< endl;

	}
	for (i = 0; i < m; i++) {
		cout << ans[i] << endl;
	}

	return 0;
}

