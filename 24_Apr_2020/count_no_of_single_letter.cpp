/*Create a function that counts the number of times a particular letter shows up in the word search.
Examples
letterCounter([
  ["D", "E", "Y", "H", "A", "D"],
  ["C", "B", "Z", "Y", "J", "K"],
  ["D", "B", "C", "A", "M", "N"],
  ["F", "G", "G", "R", "S", "R"],
  ["V", "X", "H", "A", "S", "S"]
], "D") ➞ 3
// "D" shows up 3 times: twice in the first row, once in the third row.
letterCounter([
  ["D", "E", "Y", "H", "A", "D"],
  ["C", "B", "Z", "Y", "J", "K"],
  ["D", "B", "C", "A", "M", "N"],
  ["F", "G", "G", "R", "S", "R"],
  ["V", "X", "H", "A", "S", "S"]
], "H") ➞ 2*/

#include <conio.h>
#include <iostream>
using namespace std;

int count_lett(char x[10], char c)
{
    int count = 0;
    int i;

    for (i = 0; i < 9; i++)
    {
        if (x[i] == c)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char arr[10];
    int count;
    char z;
    int k;
    string choice;
    char value;
    int len;

    do
    {
        cout << "Enter the String characters in array ";
        for (k = 0; k < 10; k++)
        {
            cin>>arr[k];

            
        }

        cout << "Enter character to find its length";
        cin >> z;

        count = count_lett(arr, z);

        cout << "No of " << z << endl;
        cout << count << endl;

        cout << "You wanna Close (Yes or No)" << endl;
        cin >> choice;

    } while (choice != "yes");

    cout << "...... The End ...... ";
}
