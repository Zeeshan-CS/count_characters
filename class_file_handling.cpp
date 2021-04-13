// Write a C++ Program to Maintain Book Records using File Handling
// Use file handling to perform following operations:
// 1)      Add new record
// 2)      View all records
// 3)      Delete particular record
// 4)      Search record
// 5)      Update record (edited)

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
class Library
{
    Book books[100];
    int currentBookCount;

public:
    //constructor
    Library()
    {
        currentBookCount = 0;
        LoadBooks();
    }

    void Add_New_Record(string id, string name, string price)
    {
        Book book(id, name, price);

        bool found = false;
        for (int i = 0; i < currentBookCount; i++)
        {
            if (books[i].get_bookid() == id)
            {
                found = true;
            }
        }

        if (found == true)
        {
            cout << "Id already  present\n";
        }
        else
        {
            books[currentBookCount] = book;
            currentBookCount++;
            ofstream file;
            file.open("book_Record.txt", std::ios::app);
            file << book.get_bookid() << "," << book.get_bokname() << "," << book.get_bookprice() << endl;
            file.close();
        }
    }
    void LoadBooks()
    {
        int i;
        string text;
        ifstream MyReadFile("book_Record.txt");
        string myArray[20];
        int count = 0;
        while (getline(MyReadFile, text, '\n'))
        {
            myArray[count] = text;
            count++;
        }

        for (int i = 0; i < count; i++)
        {
            Book book;
            size_t pos = 0;
            string token;
            string delimeter = ",";
            int flag = 0;
            while ((pos = myArray[i].find(delimeter)) != string::npos)
            {
                token = myArray[i].substr(0, pos);
                if (flag == 0)
                {
                    book.setid(token);
                }
                else if (flag == 1)
                {
                    book.setname(token);
                }
                flag++;
                myArray[i].erase(0, pos + delimeter.length());
            }
            book.setprice(myArray[i]);
            books[currentBookCount] = book;
            currentBookCount++;
        }
        MyReadFile.close();
    }
    void View_all_Records()
    {
        cout << "\nView a book module" << endl;
        for (int i = 0; i < currentBookCount; i++)
        {
            books[i].printBook();
        }
    }
    void Delete_par_Record()
    {
        cout << "delete module";
        // remove("book_Record.txt");
    }
    void Search_Record()
    {

        cout << "search module" << endl;
        string search_value;
        string search;
        string text_file_line;

        cout << "Input Search Value" << endl;
        cin >> search_value;

        ifstream openfile("book_Record.txt");

        if (openfile.is_open())
        {
            while (!openfile.eof())
            {
                cout << "\n";
                getline(openfile, search);
                cout << search_value << endl;
                cout << search;
                if (search_value == search)
                {
                    cout << "Result" << search;
                }
                else
                {
                    cout << "Not available";
                }
            }
        }
        else
        {
            cout << "File error \n";
        }
    }
    void Update_Record()
    {
        cout << "update module" << endl;
        cout << " 1 for update id";
        cout << " 2 for update book name";
        cout << " 3 for update price";
        ofstream MyReadFile("book_Record.txt");
        string text;
        string array[100];
        int i =0;
        // file.open("book_Record.txt", std::ios::app);

        while (getline(MyReadFile, text, '\n'))
        {
            array[i]=text;

            i++;
        }

        // file.close();
    }
};
int main()
{
    Library library;

    int selection;
    cout << "\n 1 for Enter Record ";
    cout << "\n 2 for View  Record ";
    cout << "\n 3 for Delete Record ";
    cout << "\n 4 for Search  Record ";
    cout << "\n 5 for Update  Record ";
    cout << "\n 6 Select your Choice ";
    cin >> selection;

    if (selection == 1)
    {
        string x, y, z;

        cout << "Enter the id of book ";
        cin >> x;

        cout << "Enter the Name of the book ";
        cin >> y;

        cout << "Enter the Price of the book ";
        cin >> z;
        library.Add_New_Record(x, y, z);
    }

    else if (selection == 2)
    {
        library.View_all_Records();
    }

    else if (selection == 3)
    {
        Library obj3;
        obj3.Delete_par_Record();
    }
    else if (selection == 4)
    {
        Library obj4;
        obj4.Search_Record();
    }
    else if (selection == 5)
    {
        Library obj5;
        obj5.Update_Record();
    }
}