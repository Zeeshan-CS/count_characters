#include <iostream>
#include <conio.h>
using namespace std;

void sort(int x[10])
{
    //for (int i = 0; i < 5; ++i) {
    //  cout << "Student " << i + 1 << ": " << m[i] << endl;

    int i, j, temp;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10 - i; j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
                //swapping using 2 var
                // x[j] = x[j] + x[j+1];
                // x[j+1] = x[j] - x[j+1];
                // x[j] = x[j] - x[j+1];
            }
        }
    }
    cout << " Sorted array ";
    for (i = 0; i < 10; i++)
    {
        cout << x[i] << " ";
    }
}
// void sort(float x[])
// {
// }
// void sort(double x[])
// {
// }

int main()
{
    int list1[10];
    float list2[10];
    double list3[10];
    int x;
    int y;

    for (x = 0; x < 10; x++)
    {
        cout << " Enter the NUmbers for sorting ";
        cin >> list1[x];
    }

    sort(list1);
}