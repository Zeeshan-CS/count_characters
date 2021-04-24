/*Write a C++ program to answer inquiries about student data.
The program will display a menu that enables the users to choose whether they want to view 
all students ’records or view only the records of a specific student by the student’s id. 
See sample below.
MENU
1. View all students’ records
2. View a student’s records by ID
3. Show the highest and the lowest final scores
Please enter your choice: 1
|StudentID     | Quiz1    | Quiz2 | Mid-Term | Final |   ==================================================
|1232          |  10      | 23    | 45       | 56    |    
|2343          |  45      | 43    | 24       |  78   |
|2343          |  34      | 45    | 45       | 45    |
|3423          |  67      | 6     | 65       | 56    |
Note: These records will be stored in a two-dimensional array*/
#include <conio.h>
#include <iostream>
using namespace std;

void view_stdnts(int x[4][5])
{
    int r, c;

    cout << "  Student id|  Quiz1  | Quiz2 | Mid-Term | Final" << endl;
    for (r = 0; r < 4; r++)
    {
        for (c = 0; c < 5; c++)
        {
            cout << "\t";
            cout << x[r][c] << " \n"[c == 5 - 1];
        }
    }
}
void view_by_stID(int x[4][5])
{
    int id;
    int record;
    int r, c;
    cout << " Enter Student ID to find the Record ";
    cin >> id;

    for (r = 0; r < 4; r++) //outer loop
    {

        for (c = 0; c < 5; c++) //inner loop
        {
            if (id == x[r][c])
            {
                cout << " Record " << r << endl;
                record = r;
                break;
            }
        }
    }
    cout << " Record of Student " << endl;
    cout << "  Student id|  Quiz1  | Quiz2 | Mid-Term | Final" << endl;
    for (c = 0; c < 5; c++)

    {
        cout << "\t";
        cout << x[record][c];
    }
}
void show_high_low_score(int x[4][5])
{
    int r, c;
    int high_score = 0;
    int low_score=100;

    for (r = 0; r < 4; r++)
    {
        for (c = 0; c < 1; c++)
        {
            if (x[r][4] > high_score){
                    high_score = x[r][4];
                }
                if (x[r][4] < low_score){
                    low_score = x[r][4];
                }

        }
    }
    
    cout<<"Highest Score = " <<high_score<<endl;
    cout<<"Lowest Score = " <<low_score<<endl;
}

int main()
{
    int st_record[4][5] = {
        {1232, 10, 23, 45, 56},
        {1233, 45, 43, 24, 78},
        {1234, 34, 45, 45, 45},
        {1235, 67, 6, 65, 65}};
    int choice;

    cout << " \nMENU ";
    cout << " \n1. View all students' records ";
    cout << " \n2. View a student's records by ID ";
    cout << " \n3. Show the highest and the lowest final scores ";
    cout << " \nPlease Enter you choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << " View all students " << endl;
        view_stdnts(st_record);
        break;

    case 2:
        cout << " View student's records by ID " << endl;
        view_by_stID(st_record);
        break;

    case 3:
        cout << " Show the highest and the lowest final scores " << endl;
        show_high_low_score(st_record);
        break;
    }
}