#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    string data = "Hello World";
    int i;
    cout<<"ASCII value of Hello World " ;
    for (i = 0; i < 11; i++)
    {
        cout<< int(data[i])  ;
    }
}