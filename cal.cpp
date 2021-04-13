#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int n1,n2;
    int choice;

    cout<<"1 for addition"<<endl;
    cout<<"2 for subtration";
    cin>>choice;

cout<<" Enter value of num1";
    cin>>n1;
    cout<<"Enter value of num2";
    cin>>n2;

    if (choice == 1)
    {
        cout<<"sum of n1 nd n2 = "<<n1+n2;
    }
    else if(choice == 2)
    {
        cout<<"Subtration of n1 nd n2 = "<<n1-n2;        
    }

}