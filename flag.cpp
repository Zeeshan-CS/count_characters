#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int row, col, i;
    for (row = 0; row < 15; row++)
    {
        cout << endl;
        for (col = 0; col < 47; col++)
        {
            if ((col < 12) && (row < 8))
            {
                if (col % 2 == 0)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            else
            {
                cout << "=";
            }
        }
    }
}