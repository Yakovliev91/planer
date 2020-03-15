#include "Header.h"
#include <iostream>
#include <list>
#include <fstream>
#include<windows.h>
using namespace std;

void SetColor(int text, int bg) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}

#define CLEAR system("cls");
#define PAUSE system("pause");

list<Event>events;
const string fileName = "events.txt";

void AddNewEvent()
{
	Event newEvent;
	cout << "Enter name of event :\n" << endl;
	cin.ignore();
	getline(cin, newEvent.name);

	cout << "Enter title of event :\n" << endl;
	cin >> newEvent.title;

	cout << "Enter description of event :\n" << endl;
	cin >> newEvent.desription;

	cout << "Enter day and hour of event :\n" << endl;
	cout << "Day :\n" << endl;
	
	cin >> newEvent.day;
	cout << "Hour :\n" << endl;
	cin >> newEvent.hour;

	cout << "Enter level of importance :\n" << endl;
	cin >> newEvent.levelIpmortance;

	events.push_back(newEvent);

	ofstream fout;
	fout.open(fileName, fstream::app);

	bool isOpen = fout.is_open();
	if (isOpen == false) {
		cout << "Error: Application can't connecting to database file!\n" << endl;
	}
	else {
		fout << newEvent.title << endl;
		fout << newEvent.desription << endl;
		fout << newEvent.day << endl;
		fout << newEvent.hour << endl;
		fout << newEvent.levelIpmortance << endl;
	}
	fout.close();
	cout << "New event successful added...\n" << endl;
	PAUSE
	CLEAR

}

void ShowAllEvents()
{
	for (Event item: events)
	{
		if (item.levelIpmortance == 1)
		{
			cout << "Event name :" << endl;
			SetColor(2, 0);
			cout<<item.name << endl;
			SetColor(7, 0);

		}
		else if (item.levelIpmortance==2)
		{
			cout << "Event name :" << endl;
			SetColor(12, 0);
			cout << item.name << endl;
			SetColor(7, 0);
		}
		else {
			item.levelIpmortance == 3;
			cout << "Event name :" << endl;
			SetColor(4, 0);
			cout << item.name << endl;
			SetColor(7, 0);
		}
		

		cout << "TITLE :" << item.title << endl;
		cout << "DESCRIPTION :" << item.desription << endl;
		cout << "DAY :"<< item.day << endl;
		cout << "TIME :" << item.hour<< "PM" << endl;
		
		
	}
	
}

