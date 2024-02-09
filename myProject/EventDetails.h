#ifndef EVENTDETAILS_H
#define EVENTDETAILS_H

#include <iostream>
#include <ctime>
#include <string>

using namespace std;



class EventDetails {
	string name;
	string location;
	string date;
	string time;
	int duration;

public:

	EventDetails() {

	}

	EventDetails(string name, string location, string date, string time, int duration) {
		this->setName(name);
		this->setLocation(location);
		this->setDate(date);
		this->setTime(time);
		this->setDuration(duration);
	}


	//Setters
	void setName(string name1) {
		if (name1.length() < 3 || name1.length() > 30) {
			throw ("Invalid Name");
		}
		this->name = name1;
	}

	void setLocation(string location1) {
		if (location1.length() < 3 || location1.length() > 30) {
			throw ("Invalid Location");
		}
		this->location = location1;
	}

	void setDate(string date1) {
		if (date1.length() != 10) {
			throw ("Date format: dd/mm/yyyy");
		}
		this->date = date1;
	}

	void setTime(string time1) {
		if (time1.length() != 5) {
			throw ("Time format: hh:mm, ex: 18:15");
		}
		this->time = time1;
	}

	void setDuration(int duration1) {
		if (duration1 < 1) {
			throw ("Invalid duration");
		}
		this->duration = duration1;
	}

	//Getters
	string getName() {
		return this->name;
	}

	string getLocation() {
		return this->location;
	}

	string getDate() {
		return this->date;
	}

	string getTime() {
		return this->time;
	}

	int getDuration() {
		return this->duration;
	}

	friend void operator>>(istream& console, EventDetails& t);

};

void operator>>(istream& console, EventDetails& t) {
	cout << "Name: ";
	string name;
	console >> name;
	t.name = name;

	cout << "Location: ";
	string location;
	console >> location;
	t.location = location;

	cout << "Date: ";
	string date;
	console >> date;
	t.date = date;

	cout << "Time: ";
	string time;
	console >> time;
	t.time = time;

	cout << "Duration: ";
	int duration;
	console >> duration;
	t.duration = duration;

}

ostream& operator<<(ostream& console, EventDetails& e) {
	console << "Event Name: " << e.getName() << endl;
	console << "Location: " << e.getLocation() << endl;
	console << "Date: " << e.getDate() << endl;
	console << "Time: " << e.getTime() << endl;
	console << "Duration: " << e.getDuration() << endl;

	return console;
}

#endif
