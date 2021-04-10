// code to count the characters

#include <iostream>
using namespace std;
int size_of_string(string x)
{
    int i = 0;
    int count = 0;
    int len;
    bool flag = true;

    cout<<"Sentence is "<<x<<endl;
    for (i = 0; flag != false; i++)
    {
        if (x[i] == '\0')
        {
            flag = false;
            count++;
        }
        else if (x[i] == '\n')
        {
            count++;
        }
    }
    return count;
}

int main()
{

    string text="Zeeshan\nHamza\nUmer\nwhat a wonderful day";

    int length;

    cout << "Enter a Sentence to count characters in it ";
    
    // getline(std::cin, text);

    length = size_of_string(text);

    cout << "The length of string is " << length;

    //	cout<<"The characters are =  " <<text.length();
}
