#include <iostream>
#include <conio.h>
using namespace std;
/*          Find largest 
                And
        Smallest from the array */

int main()
{
    int arr[10];
    int i, largest = 0;
    int temp = arr[0];

    for (i = 0; i < 10; i++)
    {
        cout << "Enter some positive values ";
        cin >> arr[i];
    }

    for (i = 0; i < 10; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (temp > arr[i])
        {
            temp = arr[i];
        }
    }
    cout << "The largest among all " << largest << endl;
    cout << "The Smallest among all " << temp;
}
