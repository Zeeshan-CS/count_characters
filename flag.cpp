#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int count = 0;
    int row, col, i;
    for (row = 1; row <= 15; row++)
    {
        cout << endl;
        for (col = 0; col < 47; col++)
        {
            if ((col < 6) && (row < 8))
            {
                if (row % 2 != 0)
                {
                    cout << "* ";
                }
                else
                {
                    if (col == 5)
                    {
                        cout << "  ";
                    }
                    else
                    {
                        cout << " *";
                    }
                }
            }
            else
            {
                cout << "==";
            }
        }
    }
}