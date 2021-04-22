#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;

int main()
{

    char str[250];
    int length = 0;
    int middle = 0;
    int nmiddle;
    int pspace;
    int pre_space[30];
    int new_space;
    int div;
    int count;

    cout << "Enter a string:\n";
    cout << endl;
    gets(str);

    length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        str[i] = tolower(str[i]);
    }

    for (int i = 0; i < length; i++)
    {
        if (i == 0 || i == (length - 1))
        {
            str[i] = toupper(str[i]);
        }
        else if (str[i] == ' ')
        {
            str[i - 1] = toupper(str[i - 1]);
            str[i + 1] = toupper(str[i + 1]);
        }
        else if (str[i] == ' ')
        {
            pspace  = i + 1;
            new_space = i - 1;

        }
    }
    cout << endl;
    cout << "String after capitalizing first and last letter of each word:\n";
    cout << endl;
    cout << str << endl;

    return 0;
}
        // if (str[i] == ' ')
        // {
        //     count++;
        // }
        // if ((str[i] == ' ') && (count == 1))
        // {
        //     middle = i - 1;
        //     middle = middle / 2;
        //     str[middle] = toupper(str[middle]);
        // }
        // if ((str[i] == ' ') && (count > 1))
        // {
        //     pspace = pre_space[i]+1;
        //     nmiddle = i - 1;
        //     nmiddle = pspace + nmiddle / 2;
        //     str[nmiddle] = toupper(str[nmiddle]);
        // }
    

    // if (str[i] == ' ')

    // // {
    //     pre_space = i;
    //     pre_space++;
    //     middle = i + pre_space / 2;
    //     str[middle] = toupper(str[middle]);
    // }
    // else if (str[i] == ' ')
    // {
    //     // if (middle == 0)
    //     // {
    //     //     middle = (i - 1) - (middle);
    //     // }
    //     // else
    //     // {
    //     //     middle = (i - 2) + (middle);
    //     // }
    //     // middle = middle / 2;
    //     // middle = middle - 32;
    //     // str[middle] = toupper(str[middle]);
    // }
    // else if (str[i] == ' ')
    // {
    //     int j = i;
    //     i = i - j;
    // }

    

