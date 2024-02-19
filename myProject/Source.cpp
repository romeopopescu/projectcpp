#include <iostream>
#include <ctime>
#include <string>

using namespace std;

#include "EventSeats.h"
#include "EventDetails.h"
#include "Ticket.h"


int main() {
	srand(time(nullptr));

	int step, step1;
	EventDetails t;
	Ticket a;

	do {
		cout << "\t\t\t**** HOME PAGE ****" << endl;
		cout << "\t\t\tPress: " << endl;
		cout << "\t\t\t0 -> Customer \n";
		cout << "\t\t\t1 -> Admin \n";
		cout << "\t\t\t2 -> Quit \n";
		cout << "\t\t\t";
		cin >> step;

		switch (step)
		{
		case 0:
		{	
			do 
			{	
				cout << "\t\t\t**** BUY TICKETS ****" << endl;
				cout << "\t\t\tPress: " << endl;
				cout << "\t\t\t0 -> Buy ticket \n";
				cout << "\t\t\t1 -> Verify ticket \n";
				cout << "\t\t\t2 -> Quit \n";
				cout << "\t\t\t";
				cin >> step1;

				switch (step1)
				{
					case 0:
					{	
						cout << "Choose event:" << endl << endl;
						cout << "1. " << t.getName() << endl;

						int step2;
						

						do {
							cin >> step2;
							switch (step2) {
								case 0:
								{
									break;
								}
								case 1:
								{
									cout << t;
									break;
								}
								case 2:
								{
									break;
								}
							}
						}while (step2 != 2);

						break;
					}

					case 1:
					{
						break;
					}

					case 2:
					{
						break;
					}
				}


			} while (step1 != 2);
			
			
			break;
		}
		case 1:
		{
			cout << "**** ADMIN PAGE ****" << endl;
			cin >> t;
			break;
		}
		case 2:
		{
			return 0;
		}

		}

	} while (step != 2);
}
	