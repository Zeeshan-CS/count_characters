#include <iostream>
using namespace std;
int main()
{
    char txt[50];
    int countLines = 0;
    int i;
    cout<<"Enter a string";
    gets(txt);

    for(i=0 ; txt[i] !='\0' ; i++)
    {
        if (txt[i] == '\n')
        {
            countLines++;
        }

    }
    cout<<"Number of lines in String are " << countLines + 1;
}