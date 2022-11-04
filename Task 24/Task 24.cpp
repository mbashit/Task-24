// Task 24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*24. Даны два массива целых чисел А и В, содержащие по n элементов.
Переслать в массив С сначала значения элементов того массива, где больше
элементов с максимальной суммой цифр, затем значения элементов другого
массива.*/

#include <iostream>
using namespace std;

void enter_array_values(int* array, int size);
int sum_of_digits(int num);
int max_sum_of_digits(int* array, int size);

int main()
{
    int* A = nullptr;
    int* B = nullptr;
    int* C = nullptr;

    int n;
    cout << "enter the size of array: ";
    cin >> n;

    A = new int[n];
    B = new int[n];
    C = new int[2 * n];

    cout << "For array A:" << endl;
    enter_array_values(A, n);
    cout << "For array B:" << endl;
    enter_array_values(B, n);

    int max_sum_A = max_sum_of_digits(A, n);
    int max_sum_B = max_sum_of_digits(B, n);

    if (max_sum_A > max_sum_B)
    {
        for (int i = 0; i < n; i++)
        {
            C[i] = A[i];
        }
        for (int i = n; i < 2 * n; i++)
        {
            C[i] = B[i - n];
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            C[i] = B[i];
        }
        for (int i = n; i < 2 * n; i++)
        {
            C[i] = A[i - n];
        }
    }

    for (int i = 0; i < 2 * n; i++)
    {
        cout << C[i] << " ";
    }
    cout << endl;
    // Free up the memory
    delete[] A;
    delete[] B;
    delete[] C;
}

void enter_array_values(int* array, int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> array[i];
    }
}

int sum_of_digits(int num)
{
    int digit, sum = 0;
    while (num != 0)
    {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    return sum;
}

int max_sum_of_digits(int* array, int size)
{
    int max = sum_of_digits(array[0]);
    for (int i = 1; i <= size - 1; i++)
    {
        if (max < sum_of_digits(array[i]))
        {
            max = sum_of_digits(array[i]);
        }
    }

    return max;
}
    
