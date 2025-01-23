#include <iostream>
#include <iomanip>
#include <array>
#include <string>

using namespace std;

const int numBooks = 20;
int SearchString (const array <string, numBooks> &titles, const userInput );

int main(){
	int main(){
	array < string, numBooks > bookTitle {"Star Wars", "The Empire Strikes Back (Star Wars)",
						"Splinter of the Mind's Eye (Star Wars)", "Return of the Jedi (Star Wars)",
						"Heir to the Empire (Star Wars: The Thrawn Trilogy, Vol. 1)", 
						"Dark Force Rising (Star Wars: The Thrawn Trilogy, Vol. 2",
						"The Last Command (Star Wars: The Thrawn Trilogy)",
						"Specter of the Past (Star Wars: The Hand of Thrawn #1)",
						"Vision of the Future (Star Wars: The Hand of Thrawn, Book 2)",
						"Battlestar Galactica", "New Battlestar Galactica Volume 1 (Battlestar Galactica (Dynamite)) (v. 1)",
						"New Battlestar Galactica Volume II Hardcover (Battlestar Galactica (Dynamite)","The Hobbit",
						"The Lord of the Rings: 50th Anniversary, One Vol. Edition", "The Two Towers", "The Return of the King",
						"The Fellowship of the Ring", "C++ Programming: From Problem Analysis to Program Design 7th Edition",
						"Digital Computer Electronics", "Assembly Language for x86 Processors (7th Edition)"};
	char choice;
	string toSearch;
	int result;
		
	do {
	cout << "*****************A5*****************\n";
	cout << " Enter following options \n";
	cout << " S - Search for book Titles\n";
	cout << " Q - Quit\n";
	cout << " Enter your choice\n";
	cin >> choice;

	cout << "Enter the book title you would like to seaarch for\n";
	cin >> toSearch;

		// Pass the string to the function to look up for it
		result = SearchString ( bookTitle, toSearch );

		if (result != -1 )
		{
			cout << "The string " << toSearch << " is found ..\n";
			cout << bookTitle[result] << endl;
		}
			
		else if 
		{
			cout << "The string " << toSearch << " is NOT found ..\n";
		}
		
	}
	while (choice != 'Q')

return 0;
}

int SearchString (const array <string, numBooks> &titles, const userInput )
{
int index = 0;
string *find;
while ( index < numBooks )
{
	find = strstr ( array[index] , toFind);

	// If the substring is found
	if (find)
		return index;
}

// if the string is not found return a sentinel value;
return -1;
}
