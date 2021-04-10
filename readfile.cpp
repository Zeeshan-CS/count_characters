#include <iostream>
#include <fstream>
using namespace std;
{
    string text;
    string filetext;
    char select;
    do{
        cout<<"Enter a text in file";
        cin>>text;
    }while(select == 'N');
    
// to write a file
    ofstream MyFile("capregsoft.txt");
    Myfile<<text;

    MyFile.close();

// to read a file

    ifstream MyReadFile("capregsoft.txt");
    while ()



    

}
