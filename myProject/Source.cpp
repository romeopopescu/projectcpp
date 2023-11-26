#include <iostream>

using namespace std;

class EventLocation {
	int maxSeats;
	int zones;
	string name;
	

public:

	//Default constructor
	EventLocation(int maxSeats1, int zones1, const string nameLoc) {
		this->setMaxSeats(maxSeats1);
		this->setZones(zones1);
		this->setName(nameLoc);
	}

	//Setters
	void setMaxSeats(int nrSeats) {
		if (nrSeats < 0) {
			throw exception("Negative number of seats");
		}
		this->maxSeats = nrSeats;
	}

	void setZones(int nrZones) {
		if (nrZones < 0) {
			throw exception("Negative number of rows");
		}
		this->zones = nrZones;
	}
	
	void setName(const string nameLoc) {
		if (nameLoc.length() < 3) {
			throw exception("Location too short");
		}
		this->name = nameLoc;
	}

	//Getters
	int getMaxSeats() {
		return this->maxSeats;
	}

	int getZones() {
		return this->zones;
	}

	string getName() {
		return this->name;
	}

	




};

class EventDetails {
	string date;
	string time;
	string eventType;

public:

	//Default constructor
	EventDetails(string date, string time, string eventType) {
		this->setDate(date);
		this->setTime(time);
		this->setEventType(eventType);
	}


	//Setters
	void setDate(string date1) {
		if (date1.length() != 10) {
			throw exception("Date format: dd/mm/yyyy");
		}
		this->date = date1;
	}

	void setTime(string time1) {
		if (time1.length() != 5) {
			throw exception("Time format: hh:mm, ex: 18:15");
		}
		this->time = time1;
	}

	void setEventType(const string type) {
		
		string type1 = type;
		
		for (int i = 0; i < type.length(); i++) {
			type1[i] = toupper(type[i]);
		}
		
		if (type1 != "MOVIE" && type1 != "FOOTBALL MATCH") {
			throw exception("Available event types: movie and football match");
		}
		this->eventType = type;
	}

	//Getters
	string getDate() {
		return this->date;
	}

	string getTime() {
		return this->time;
	}

	string getType() {
		return this->eventType;
	}


};

class Ticket {
	int id;

public:

};



int main() {
	
	EventLocation fotbal(100, 3, "Arena Nationala");

	cout << fotbal.getName();

	EventDetails fotbalDetails("10/11/2001", "18:00", "Football Match");

	cout << endl << fotbalDetails.getType();
	

}