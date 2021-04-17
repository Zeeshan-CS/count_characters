#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i = 0;
    int marks[i];
    int total;
    int avg[i];
    string name[5];
    for (i=1; i<=5 ; i++)
    {
        cout<<"Enter the names of Students ";
        cin>>name[i];
    }
    for (i=1; i<=5 ; i++)
    {
        cout<<"Enter the marks of students 1 ";
        cin>>marks[i];
    }
    for (i=1; i<=5 ; i++)
    {
        total = total + marks[i];
    }
    avg[1]=total/5;
    
    for (i=1; i<=5 ; i++)
    {
        cout<<"Enter the marks of students 2 ";
        cin>>marks[i];
    }
    for (i=1; i<=5 ; i++)
    {
        total = total + marks[i];
    }
    avg[2]=total/5;
    

    for (i=1; i<=5 ; i++)
    {
        cout<<"Enter the marks of students 3 ";
        cin>>marks[i];
    }
    for (i=1; i<=5 ; i++)
    {
        total = total + marks[i];
    }
    avg[3]=total/5;
    

    for (i=1; i<=5 ; i++)
    {
        cout<<"Enter the marks of students 4 ";
        cin>>marks[i];
    }
    for (i=1; i<=5 ; i++)
    {
        total = total + marks[i];
    }
    avg[4]=total/5;
    

    for (i=1; i<=5 ; i++)
    {
        cout<<"Enter the marks of students 5 ";
        cin>>marks[i];
    }
    for (i=1; i<=5 ; i++)
    {
        total = total + marks[i];
    }
    avg[5]=total/5;
    
    for (i =1 ; i<=5 ; i++)
    {
        cout<<"Name of student " << name[i]<<endl;
        cout<<"Average of student " << avg[i]<<endl;
    }    


}
