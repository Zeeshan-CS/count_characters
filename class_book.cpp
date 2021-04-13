#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
class Book
{
private:
    string book_ID;
    string book_Name;
    string book_price;

public:
    Book()
    {
        book_ID = "";
        book_Name = "";
        book_price = "";
    }
    Book(string x, string y, string z)
    {
        book_ID = x;
        book_Name = y;
        book_price = z;
    }

    void setid(string x)
    {

        book_ID = x;
    }

    void setname(string y)
    {
        book_Name = y;
    }
    void setprice(string z)
    {
        book_price = z;
    }

    string get_bookid()
    {

        return (book_ID);
    }
    string get_bokname()
    {
        return (book_Name);
    }
    string get_bookprice()
    {
        return (book_price);
    }

    void printBook()
    {
        cout << "Id: " << book_ID << "\tName: " << book_Name << "\tPrice: " << book_price << endl;
    }
};