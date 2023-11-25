#include <iostream>

using namespace std;

class eventLocation {
	int maxSeats;
	int rows;
	int zones;
	int seatNumber;

	eventLocation() {
		this->maxSeats = 10000;
		this->rows = 100;
		this->zones = 5;
		this->seatNumber = 2;
	}

public:

	void setMaxSeats(int nrSeats) {
		if (nrSeats < 0) {
			throw exception("Negative number of seats");
		}
		this->maxSeats = nrSeats;
	}




};

class eventDetails {
	int date;
	int time;
	char* name;

public:

};

class Ticket {
	int id;

public:

};



int main() {
	
}