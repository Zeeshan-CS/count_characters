// code to count the characters

#include <iostream>
using namespace std;
int size_of_string(string x)
{
	string sentence = x;
	return (sentence.length());
	
}
int main()
{


	string text;
	int length;
	
	cout<<"Enter a Sentence to count characters in it ";
	cin>>text;
	length = size_of_string(text);	
	cout<<"The length of string is "<<length;
//	cout<<"The characters are =  " <<text.length();
	
	
}
