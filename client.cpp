#include "Aeroplan.h"
#include "date.h"
#include<iostream>
using namespace std;
void display(Aeroplan a);
int main() {
	Aeroplan a[5];
	date d;
	a[0].setRoute("japan");
	a[1].setRoute("india");
	a[2].setRoute("shrilanka");
	a[3].setRoute("america");
	a[4].setRoute("austrelia");
	a[0].setFare(3000);
	a[1].setFare(4000);
	a[2].setFare(5000);
	a[3].setFare(6000);
	a[4].setFare(7000);
	a[0].setTotalFare(a[0].getFare() * 1.19);
	a[1].setTotalFare(a[1].getFare() * 1.19);
	a[2].setTotalFare(a[2].getFare() * 1.19);
	a[3].setTotalFare(a[3].getFare() * 1.19);
	a[4].setTotalFare(a[4].getFare() * 1.19);

	do {
		cout << "\n1:" << a[0].getRoute();
		cout << "\n2:" << a[1].getRoute();
		cout << "\n3:" << a[2].getRoute();
		cout << "\n4:" << a[3].getRoute();
		cout << "\n5:" << a[4].getRoute();
		int choice;
		cin >> choice;

		switch (choice) {
		case 1:
			cout<<"\nenter date:";
			d.accept();
			display(a[0]);
			d.display();
			break;

		case 2:
			d.accept();
			display(a[1]);
			d.display();
			break;

		case 3:
			d.accept();
			display(a[2]);
			d.display();
			break;

		case 4:
			d.accept();
			display(a[3]);
			d.display();
			break;

		}
	} while (1);

}

void display(Aeroplan a) {
	cout << "\nroute:" << a.getRoute();
	cout << "\nfare:" << a.getFare();
	cout << "\nfare including GST:" << a.getTotalFare();

}
