#include <iostream>
#include <conio.h>
using namespace std;
/*Write a C++ program (using function overloaded) to sort 10 integer values, 
or 10 long values, or 10 double values.*/

void sort(int x[10])
{
    int i, j, temp;

    for (i = 0; i < 10 - 2; i++)
    {
        for (j = 0; j < 10 - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    cout << " Sorted array ";
    for (i = 0; i < 10; i++)
    {
        cout << x[i] << " ";
    }
}
void sort(float x[10])
{
    int i, j, temp;

    for (i = 0; i < 10 - 2; i++)
    {
        for (j = 0; j < 10 - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    cout << " Sorted array ";
    for (i = 0; i < 10; i++)
    {
        cout << x[i] << " ";
    }
}
void sort(double x[10])
{
    int i, j, temp;

    for (i = 0; i < 10 - 2; i++)
    {
        for (j = 0; j < 10 - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    cout << " Sorted array ";
    for (i = 0; i < 10; i++)
    {
        cout << x[i] << " ";
    }
}

int main()
{
    double list1[10];
    float list2[10];
    double list3[10];
    int x;
    int choice;

    cout << " 1 for integer array ";
    cout << " 2 for float array ";
    cout << " 3 for double array ";
    cin >> choice;

    if (choice == 1)
    {
        for (x = 0; x < 10; x++)
        {
            cout << " Enter the NUmbers for sorting ";
            cin >> list1[x];
        }
        sort(list1);
    }
    else if (choice == 2)
    {
        for (x = 0; x < 10; x++)
        {
            cout << " Enter the NUmbers for sorting ";
            cin >> list2[x];
        }
        sort(list2);
    }
    else if (choice == 3)
    {
        for (x = 0; x < 10; x++)
        {
            cout << " Enter the NUmbers for sorting ";
            cin >> list3[x];
        }
        sort(list2);
    }
}