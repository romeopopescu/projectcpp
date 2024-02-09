#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int random_id = rand();

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