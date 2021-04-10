// Write a C++ Program to Maintain Book Records using File Handling using File Handling.
// Use file handling to perform following operations:
// 1)     Add new record
// 2)      View all records
// 3)      Delete particular record
// 4)      Search record
// 5)      Update record (edited)

/*  C++ Program to Maintain Book Records using File Handling  */
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

void add_a_book()
{
	//cout<<"in add a book module";

	int book_id;
	string book_name;
	int book_price;
	ofstream file;
	char choose;
	do
	{
		cout << "Enter the id of book ";
		cin >> book_id;

		cout << "Enter the Name of the book ";
		cin >> book_name;

		cout << "Enter the Price of the book ";
		cin >> book_price;
		"\n";
		file.open("book_Record.txt", std::ios::app);
		file  << book_id <<"," <<  book_name  <<","<<  book_price<<endl ;
		file.close();
		cout << "Do u want to add another record";
		cin >> choose;
	} while (choose != 'N');
}

void view_all_books()
{
	cout << "\n view a book module" << endl;
	"\n";
	int i;
	string text;
	ifstream MyReadFile("book_Record.txt");
	string myArray[20];
int count=0;
    while (getline(MyReadFile, text , '\n'))
	{
		myArray[count] = text;
		count++;
	}
	
	for (int i = 0; i < count; i++)
	{
		cout<<"Stored "<<myArray[i]<<endl;
	}	
	MyReadFile.close();
}
void del_par_rec()
{
	// cout << "to delete record" << endl;

	// int status;
	// string del_file;

	// cout << "Enter the Name of File to delete";
	// cin >> del_file;

	// status = remove(del_file);
	// if (status == 0)
}
void search_record()
{
	cout << "to search record";
}
void update_record()
{
	cout << "to update record";
}
int main()
{
	int choice;
	int book;

	cout << "\nPress 1 for Adding a Book ";
	cout << "\nPress 2 for View a Book ";
	cout << "\nPress 3 for Delete a Book ";
	cout << "\nPress 4 for Search a Book ";
	cout << "\nPress 5 for Update a Book ";

	cin >> choice;

	if (choice == 1)
	{
		add_a_book();
	}
	else if (choice == 2)
	{
		view_all_books();
	}
	else if (choice == 3)
	{
		del_par_rec();
	}
	else if (choice == 4)
	{
		search_record();
	}
	else if (choice == 5)
	{
		update_record();
	}
}
