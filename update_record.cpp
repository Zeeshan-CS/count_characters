// update value in the array
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
using namespace std;
int main()
{
    int array[10];
    int i;
    int search, replace;

    for (i = 0; i <= 9; i++)
    {
        cout << "\n";
        cout << "Enter ten interger numbers to fill array ";
        cin >> array[i];
    }

    for (i = 0; i <= 9; i++)
    {
        cout << endl;
        cout << array[i];
    }
    cout << "\n";
    cout << "Enter the search value " << endl;
    cin >> search;
    for (i = 0; i <= 9; i++)
    {
        if (search == array[i])
        {
            cout << "found on array " << endl;
            cout << endl;
            break;
        }
    }
    cout << array[i] << " on the index no " << i << endl;
    cout << "Enter the New updated value fot the given index " << endl;
    cin >> replace;
    array[i] = replace;
    cout << "The new value on the " << array[i] << endl;
    cout << "Updated Array ";
    for (i = 0; i <= 9; i++)
    {
        cout << endl;
        cout << array[i];
    }
}