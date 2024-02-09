#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <ctime>
#include <string>

using namespace std;


int random_id = rand();

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

class Ticket {
	const int id = 0;
	double price;
	int quantity;
	string customerName;
	string eventName;

public:
	Ticket() : id(random_id) {

	}
	Ticket(const int id1, double price1, int quantity, string customer, string event) : id(random_id) {
		this->setPrice(price1);
		this->setQuantity(quantity);
		this->setCustomerName(customer);
		this->setEventName(event);
	}

	//Setters
	void setId(int id1) {
		if (id < 0) {
			throw ("Invalid Id");
		}
	}

	void setQuantity(int quantity1) {
		if (quantity1 < 1) {
			throw ("Invalid Quantity");
		}
		this->quantity = quantity1;
	}

	void setPrice(double price1) {
		if (price1 < 0) {
			throw ("Invalid Price");
		}
		this->price = price1; // * this->quantity;
	}

	void setCustomerName(string name) {
		if (name.length() < 2) {
			throw ("Invalid Name");
		}
		this->customerName = name;
	}

	void setEventName(string name) {
		if (name.length() < 2) {
			throw ("Invalid Name");
		}
		this->eventName = name;
	}

	//Getters
	int getId() {
		return this->id;
	}

	double getPrice() {
		return this->price;
	}

	int getQuantity() {
		return this->quantity;
	}

	int getFullPrice() {
		return this->price * this->quantity;
	}

	string getCustomerName() {
		return this->customerName;
	}

	string getEventName() {
		return this->eventName;
	}

	friend void operator>>(istream& console, Ticket& t);
	
};

ostream& operator<<(ostream& console, Ticket& t) {
	console << "Id: " << t.getId() << endl;
	console << "Full price: " << t.getFullPrice() << endl;
	console << "Quantity: " << t.getQuantity() << endl;
	console << "Name: " << t.getCustomerName() << endl;
	console << "Event: " << t.getEventName() << endl;

	return console;
}

void operator>>(istream& console, Ticket& t) {
	cout << "Price: ";
	double price;
	console >> price;
	t.price = price;

	cout << "Quantity: ";
	int quantity;
	console >> quantity;
	t.quantity = quantity;

	cout << "Name: ";
	string name;
	console >> name;
	t.customerName = name;

	cout << "Event: ";
	string eventName;
	console >> eventName;
	t.eventName = eventName;

}



#endif