// Task 24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*24. Даны два массива целых чисел А и В, содержащие по n элементов.
Переслать в массив С сначала значения элементов того массива, где больше
элементов с максимальной суммой цифр, затем значения элементов другого
массива.*/

#include <iostream>
using namespace std;

int main() {

    int* a = NULL;
    int* b = NULL;
    int* c = NULL;

    int  n;
    cout << "enter the number:";
    cin >> n;

    a = new int[n];
    b = new int[n];
    c = new int[n];

    cout << "Enter elements into array A\n";
    for (int index = 0; index < n; index++) 
        cin >> a[index];
    
    cout << "Enter elelments into array B\n";
    for (int index = 0; index < n; index++) 
        cin >> b[index];
    


    for (int index = 0; index < n; index++) 
        c[index] = a[index] + b[index];

        cout << "Array A\t\t Array B \t\t  Array C\n" << endl;
    for (int index = 0; index < 0; index++) 
        cout << "\t" << a[index] << "t\t\t" << b[index] << "t\t\t" << c[index] << endl;
    
         return 0;
         }


