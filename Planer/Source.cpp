#include<iostream>
#include<string>
#include "Header.h"

using namespace std;


int main() {
	
	int action = 0;
	do
	{
		cout << "\tMENU:" << endl;

		cout << "1. Add new event" << endl;
		cout << "2. Show all events" << endl;
		cout << "3. Exit" << endl;
		
		cout << "Select action :";
		cin >> action;

		switch (action)
		{
		case 1: {
			cout << "ADD NEW EVENT:\n" << endl;
			AddNewEvent();
		}break;

		case 2: {
			cout << "ALL EVENTS:\n" << endl;
			ShowAllEvents();
			
		}break;

		case 3: {
			cout << "Bye" << endl;
		}break;
		default: {
			cout << "Please select action (1 - 3)" << endl;
		}
		}

	} while (action != 3);




	system("pause");
	return 0;
}