#include <iostream>
#include <conio.h>
using namespace std;

int to_month(int x)
{
    int month = 12 * x;
    return (month);
}
int to_days(int x)
{
    int year = x;
    int leap = 366;
    int normal = 365;
    if (year % 4 == 0)
        return (leap);
    else
        return (normal);
}
int to_hrs(int x)
{
    int year;
    year = x;
    int leap = 366;
    int normal = 365;

    if (year % 4 == 0)
        return (leap * 24);
    else
        return (normal * 24);
}
int to_min(int x)
{   int year;
    year = x;
    int leap = 366;
    int normal = 365;
    if (year % 4 == 0)
        return (leap * 24 * 60);
    else
        return (normal * 24 * 60);
}
int to_sec(int x)
{
    int year;
    year = x;
    int leap = 366;
    int normal = 365;
    if (year % 4 == 0)
        return (leap * 24 * 60 * 60);
    else
        return (normal * 24 * 60 * 60);

}

int to_millisec(int x)
{   
    int year;
    year = x;
    int leap = 366;
    int normal = 365;
    if (year % 4 == 0)
        return ((leap * 24) * (60 * 60) * 1000);
    else
        return ((normal * 24) * (60 * 60) * 1000);


}

int main()
{
    int year;
    int hrs;
    cout << "Enter the Number of years to find the months ";
    cin >> year;
    to_month(year);
    cout << "Months in a year = " << to_month(year) << endl;

    cout << "Enter year to find the days in it ";
    cin >> year;
    to_days(year);
    cout << "Days in a year = " << to_days(year) << endl;

    cout << "Enter the year to find the hrs in it ";
    cin >> hrs;
    cout << "Hours in a year = " << to_hrs(year)<< endl;

    cout << "Enter the year to find the minutes in it ";
    cin >> year;
    cout << "Minutes in a year = " << to_min(year)<< endl;

    cout << "Enter the year to find the seconds in it ";
    cin >> year;
    cout << "Second in a year = " << to_sec(year)<< endl;

    cout << "Enter the year to find the miliseconds in it ";
    cin >> year;
    cout << "Miliseconds in a year = " << to_millisec(year)<< endl;
}