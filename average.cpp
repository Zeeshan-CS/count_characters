#include <iostream>

using namespace std;

int main()
{
    string name;
    int i = 7;
    float avg;
    int sum = 0;
    int marks[i];
    int subjects = 7;

    cout << "Enter Name ";
    cin >> name;

    cout << "Enter the marks of 7 subjects ";
    for (i = 1; i <= subjects; i++)
    {
        cin >> marks[i];
    }

    for (i = 1; i <= subjects; i++)
    {
        sum = sum + marks[i];
    }
    avg = sum / subjects;

    cout << "Average of 7 subjects " << avg << endl;
    cout << "sum of marks " << sum << endl;
    
}
