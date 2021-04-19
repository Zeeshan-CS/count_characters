#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    string data = "Hello World";
    int i;

    for (i = 0; i < 11; i++)
    {
        cout << data[i] << "   ASCII value   " << int(data[i]) << endl;
    }
}