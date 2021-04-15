#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char name[50];
    char sal[10];
    char dep[30];
    ifstream inFile; 
    char inputFileName[]= "emp_record.txt";
    inFile.open(inputFileName);

    if(!inFile)
    {
        cout<<"Can't open input file name " <<inputFileName<<endl;
        exit(1);
    }

    while(!inFile.eof())
    {
        inFile >> name >> sal >> dep;
        cout<< name << sal << dep;
    }
    inFile.close();

}
