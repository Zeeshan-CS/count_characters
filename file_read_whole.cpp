#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream f("book_Record.txt", fstream::in);
    string txt;
    getline(f, txt, '\0');
    // cou t << txt << endl;
    f.close();

    int words = 0;
    int countLines = 0;
    int countcharacters = 0;
    for (int i = 0; txt[i] != '\0'; i++)
    {
        countcharacters++;
        if (txt[i] == '\n')
        {
            countLines++;
            words++;
        }
        if (txt[i] == ' ')
        {
            words++;
        }
    }
    cout << "Number of lines in String are " << countLines + 1 << endl;
    cout << "Number of characters in String are " << countcharacters << endl;
    cout << "Number of words in String are " << words + 1;
}