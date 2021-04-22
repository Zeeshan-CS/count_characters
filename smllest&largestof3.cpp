#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int x, y, z;

    cout << "Enter Number 1 " ;
    cin >> x;
    cout << "Enter Number 2 " ;
    cin >> y;
    cout << "Enter Number 3 " ;
    cin >> z;

    if (x>y && x > z)
    cout<<"Number 1 is greater " << x <<endl;
    else if(y>x && y>z)
    cout<<"Number 2 is greater " << y<<endl;
    else 
    cout<<"NUmber 3 is greater " <<z<<endl;
if (x<y && x < z)
    cout<<"Number 1 is Smaller " << x<<endl;
    else if(y<x && y<z)
    cout<<"Number 2 is smaller " << y<<endl;
    else 
    cout<<"NUmber 3 is smaller " <<z<<endl;


}