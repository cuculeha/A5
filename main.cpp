#include <iostream>
#include <array>
#include <cstring>
#include <cctype>

using namespace std;

const int numBooks = 20;
int SearchString (const array <string, numBooks> &titles, const string userInput );

int main(){
	array < string, numBooks > bookTitle {"Star Wars", "The Empire Strikes Back (Star Wars)",
						"Splinter of the Mind's Eye (Star Wars)", "Return of the Jedi (Star Wars)",
						"Heir to the Empire (Star Wars: The Thrawn Trilogy, Vol. 1)", 
						"Dark Force Rising (Star Wars: The Thrawn Trilogy, Vol. 2)",
						"The Last Command (Star Wars: The Thrawn Trilogy)",
						"Specter of the Past (Star Wars: The Hand of Thrawn #1)",
						"Vision of the Future (Star Wars: The Hand of Thrawn, Book 2)",
						"Battlestar Galactica", "New Battlestar Galactica Volume 1 (Battlestar Galactica (Dynamite)) (v. 1)",
						"New Battlestar Galactica Volume II Hardcover (Battlestar Galactica (Dynamite))","The Hobbit",
						"The Lord of the Rings: 50th Anniversary, One Vol. Edition", "The Two Towers", "The Return of the King",
						"The Fellowship of the Ring", "C++ Programming: From Problem Analysis to Program Design 7th Edition",
						"Digital Computer Electronics", "Assembly Language for x86 Processors (7th Edition)"};
	char choice;
	string toSearch;
	int result;
		
	do {
	cout << "*****************A5*****************\n";
	cout << " What would you like to do ? \n";
	cout << " S - Search for a book titles\n";
	cout << " Q - Quit. Program exits\n";
	cout << " Enter your choice\n";
	cout << "************************************\n";
	cin >> choice;
	
	while ( toupper(choice) != 'S' && toupper(choice) != 'Q')
	{
		cout << choice << " is invalid. Reenter your choice again\n.";
		cin >> choice;
	}

	if ( toupper(choice) == 'S')
	{
		cout << "Enter the book title you would like to seaarch for.\n";
		cout << "Do search for exact title; use uppercase when possible.\n";
		cin.ignore();
		getline(cin, toSearch);

		// Pass the string to the function to look up for it
		result = SearchString ( bookTitle, toSearch );

		if (result != -1 )
		{
			cout << "___________Search Results_____________\n";
			cout << "The keyword : " << toSearch << endl;
			cout << "Index  : " << result << endl;
			cout << "Title  : " << bookTitle[result] << endl;
			cout << "______________________________________\n";
		}
			
		else
		{
			cout << "______Book Title Not Found______\n";
			cout << "The keyword : " << toSearch << endl;
			cout << "Keyword NOT FOUND\n";
		}
	}

	else
	{	
		cout << "Program quitted\n";
	}
	}
		
	while (toupper(choice) != 'Q');

return 0;
}

int SearchString (const array <string, numBooks> &titles, const string userInput )
{
int index = 0;
while ( index < numBooks )
{
	// If the substring is found
	if (titles[index].find (userInput) != string::npos )
	{
		return index;
	}
	index++;
}

// if the string is not found return a sentinel value;
return -1;
}
