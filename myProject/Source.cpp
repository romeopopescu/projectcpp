#include <iostream>
#include <ctime>
#include <string>

using namespace std;

#include "header.h"



int main() {
	srand(time(nullptr));

	int step, step1;
	EventDetails t;
	

	do {
		cout << "**** HOME PAGE ****" << endl;
		cout << "Press: " << endl;
		cout << "0 -> Customer \n";
		cout << "1 -> Admin \n";
		cout << "2 -> Quit \n";
		cin >> step;

		switch (step)
		{
		case 0:
		{	
			do 
			{
				cout << "**** BUY TICKETS ****" << endl;
				cout << "Press: " << endl;
				cout << "0 -> Buy ticket \n";
				cout << "1 -> Verify ticket \n";
				cout << "2 -> Quit \n";
				cin >> step1;

				switch (step1)
				{
					case 0:
					{	
						cout << "Events:" << endl;
						cout << t;
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
	