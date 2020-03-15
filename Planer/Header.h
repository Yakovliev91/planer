#pragma once
#include<string>
using namespace std;


struct Event {
    
	string name;
	string title;
	string desription;

	int day;
	int hour;
	int levelIpmortance = 0;
	

};

void AddNewEvent();
void ShowAllEvents();
