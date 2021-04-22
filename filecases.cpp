#include <iostream>
#include <conio.h>
#include <fstream>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{

    fstream my_file;
    string text;
    my_file.open("zia_bhai.txt", ios::out);
    if (!my_file)
    {
        cout << "File not created!";
    }
    else
    {
        cout << "File created successfully!" << endl;
        text = "LorEm IpsUm is simply dUmMY TeXt of thE prIntiNg aNd tYpeseTTing inDUStry. LOREm IpsuM has been the industry's standard dummy text ever since the 1500s,  when an unknown printer took a galley of type and scrambled it to make a type specimen book ";

        cout<< text.substr((0,5)) << endl;        
        
        my_file << text;
        my_file.close();
    }

    my_file.open("zia_bhai.txt", ios::in);
    if (!my_file)
    {
        cout << "No such file";
    }
    else
    {
        int i;
        string text;

        int count = 0;
        while (getline(my_file, text, '\n'))
        {
            cout<<text;
        }
        my_file.close();
    }
}
