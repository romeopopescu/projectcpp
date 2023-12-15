#include <iostream>

using namespace std;

class EventSeats {
	int maxSeats;
	string seatType;
	char row;
	int seatNumber;

public:

	EventSeats() {

	}

	EventSeats(int maxSeats1, string type, char row1, int seatNumber1) {
		this->setMaxSeats(maxSeats1);
		this->setSeatType(type);
		this->setRow(row1);
		this->setSeatNumber(seatNumber1);
	}

	//Setters
	void setMaxSeats(int nrSeats) {
		if (nrSeats < 0) {
			throw exception("Negative number of seats");
		}
		this->maxSeats = nrSeats;
	}

	void setSeatType(string seat) {
		if (seat.length() < 0) {
			throw exception("Invalid Seat Type");
		}
		this->seatType = seat;
	}

	void setRow(char row1) {
		if (row1 == NULL) {
			throw exception("Invalid Row");
		}
		this->row = row1;
	}
	void setSeatNumber(int seatNumber1) {
		if (seatNumber1 < 0) {
			throw exception("Invalid Seat Number");
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

	char getRow() {
		return this->row;
	}

	int getSeatNumber() {
		return this->seatNumber;
	}

	void printEventLocation() {

		cout << "Number of seats: " << this->getMaxSeats() << endl;
		
	}
};

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
			throw exception("Invalid Name");
		}
		this->name = name1;
	}

	void setLocation(string location1) {
		if (location1.length() < 3 || location1.length() > 30) {
			throw exception("Invalid Location");
		}
		this->location = location1;
	}

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

	void setDuration(int duration1) {
		if (duration1 < 1) {
			throw exception("Invalid duration");
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

	void printEventDetails() {
		cout << "Name of event: " << this->getName() << endl;
		cout << "Date of event: " << this->getDate() << endl;
		cout << "Time of event: " << this->getTime() << endl;
		
	}

};

class Ticket {
	const int id;
	double price;
	int quantity;
	string customerName;
	string eventName;

public:
	Ticket() : id(0) {

	}
	Ticket(const int id1, double price1, int quantity, string customer, string event) : id(id1) {

	}

	//Setters
	void setId(int id1) {
		if (id < 0) {
			throw exception("Invalid Id");
		}
	}

	void setPrice(double price1) {
		if (price1 < 0) {
			throw exception("Invalid Price");
		}
		this->price = price1;
	}

	void setQuantity(int quantity1) {
		if (quantity1 < 1) {
			throw exception("Invalid Quantity");
		}
		this->quantity = quantity1;
	}

	void setCustomerName(string name) {
		if (name.length() < 2) {
			throw exception("Invalid Name");
		}
		this->customerName = name;
	}

	void setEventName(string name) {
		if (name.length() < 2) {
			throw exception("Invalid Name");
		}
		this->eventName = name;
	}

	//Getters
	
	
};



int main() {


	


}