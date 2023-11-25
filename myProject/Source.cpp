#include <iostream>

using namespace std;

class eventLocation {
	int maxSeats;
	int rows;
	int zones;
	int seatNumber;
	

public:

	eventLocation() {
		maxSeats = 10000;
		rows = 100;
		zones = 5;
		seatNumber = 2;
	}

	void setMaxSeats(int nrSeats) {
		if (nrSeats < 0) {
			throw exception("Negative number of seats");
		}
		maxSeats = nrSeats;
	}

	int getMaxSeats() {
		return maxSeats;
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
	
	eventLocation arenaNationala;

	arenaNationala.setMaxSeats(-100);

	cout << arenaNationala.getMaxSeats();

}