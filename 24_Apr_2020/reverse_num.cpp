/*Write a function that takes an integer i and returns a string with the integer backwards
followed by the original integer.
To illustrate:
"123"
We reverse "123" to get "321" and then add "123" to the end, resulting in "321123".*/

#include <conio.h>
#include <iostream>
using namespace std;

int revese(int x)
{
    int rev_num = 0;
    int mod;
    while (x!=0)
    {
        mod = x % 10;
        rev_num = rev_num*10 + mod;
        x /= 10;
    }
    return rev_num;

}

int main()
{
    int n;
    int r_no;
    string choice;

    do{

    
    cout<<" Enter a Number to reverse it ";
    cin>>n;
    cout<<revese(n)<<n<<endl;

    cout<<" Do you like to exit program (yes / no)";
    cin>>choice;

    }while(choice != "yes");
}