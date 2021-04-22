#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int x,y,choice;
    char ans;
do
    {
    cout << "MENU"<<endl;
    cout << " 1. Add"<<endl;
    cout << " 2. Subtract"<<endl;
    cout << " 3. Multiply"<<endl;
    cout << " 4. Divide"<<endl;
    cout << " 5. Modulus"<<endl;
    cin>>choice;

    cout<<" Enter Two numbers ";
    cin>>x>>y; 
    
    switch(choice)
    {
        case 1:
        cout<<"Result = " <<x+y; break;

        case 2:
        cout<<"Result = " <<x-y; break;

        case 3:
        cout<<"Result = " <<x*y; break;

        case 4:
        cout<<"Result = " <<x/y; break;

        case 5:
        cout<<"Result = " <<x%y; break;
        default:
        cout<<"Invalid choice";
    }   
    cout<<endl;
    cout<<"Like to calculate onece more 'y' or 'n' ";
    cin>>ans;

    }while(ans == 'y' || ans == 'Y');
        
}