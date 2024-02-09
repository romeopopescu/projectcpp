#ifndef EVENTSEATS_H
#define EVENTSEATS_H

#include <iostream>
#include <ctime>
#include <string>

using namespace std;




class EventSeats {
	int maxSeats;
	string seatType;
	char* row = nullptr;
	int seatNumber;

public:

	EventSeats() {

	}

	EventSeats(int maxSeats1, string type, char* row1, int seatNumber1) {
		this->setMaxSeats(maxSeats1);
		this->setSeatType(type);
		this->setRow(row1);
		this->setSeatNumber(seatNumber1);
	}

	//Setters
	void setMaxSeats(int nrSeats) {
		if (nrSeats < 0) {
			throw ("Negative number of seats");
		}
		this->maxSeats = nrSeats;
	}

	void setSeatType(string seat) {
		if (seat.length() < 0) {
			throw ("Invalid Seat Type");
		}
		this->seatType = seat;
	}

	void setRow(char* row1) {
		if (row1 == 0) {
			throw ("Invalid Row");
		}
		this->row = row1;
	}
	void setSeatNumber(int seatNumber1) {
		if (seatNumber1 < 0) {
			throw ("Invalid Seat Number");
		}
		this->seatNumber = seatNumber1;
	}
	
	

	//Getters
	int getMaxSeats() {
		return this->maxSeats;
	}

	string getType() {
		return this->seatType;
	}

	char* getRow() {
		return this->row;
	}

	int getSeatNumber() {
		return this->seatNumber;
	}

	void printEventLocation() {
		cout << "Type of seat: " << this->getType() << endl;
		cout << "Number of seats: " << this->getMaxSeats() << endl;
		cout << "Row: ";
		
	}

	void operator=(const EventSeats source) {
		this->maxSeats = source.maxSeats;
		this->row = source.row;
		this->seatNumber = source.seatNumber;
		this->seatType = source.seatType;
	}

	bool operator!() {
		if (this->seatNumber) {
			return true;
		}
		else {
			return false;
		}
	}

	//copy constructor
	EventSeats(const EventSeats& object) {
		this->seatNumber = object.seatNumber;
	}
};

ostream& operator<<(ostream& console, EventSeats& s) {
	console << "Seat type: " << s.getType() << endl;
	console << "Available seats: " << s.getMaxSeats() << endl;

	return console;

}

#endif