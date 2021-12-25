#include <iostream>
#include <vector>
#include <algorithm>
#include "Shop_Worker.h"
#include "Security_Guard.h"
#include "Merchandaser.h"
#include "Cashier.h"


int main()
{
	int temp, age, n, num;
	string name, place_of_work, type_of_product, specialty;

	vector < Shop_Worker* > workers;

	cout << "Enter amount of workers: \n";
	cin >> n;
	for (int i = 0; i < n; i++) {
	
		cout << "Enter name: ";
		cin >> name;
		cout << endl;
		cout << "Enter age: ";
		cin >> age;
		cout << endl;
		cout << "enter 1 - to create Secutiry Guard, 2 - to create Merchandaser, 3 - to create Cashier: \n";
		
		cin >> num;

		if (num == 1) {
			
			cout << "Enter place of work(1 - In front of cams, 2 - in the shop, 3 - outside the shop): ";
			cin >> temp;
			if (temp == 1) {
				place_of_work = "In front of cams";
			}
			if (temp == 2) {
				place_of_work = "in the shop";
			}
			if (temp == 3) {
				place_of_work = "outside the shop";
			}
			Security_Guard* sg = new Security_Guard(name, age, place_of_work);
			cin.ignore();
			workers.push_back(sg);
			cout << workers[i]->getName() << endl;
			workers[i]->print_position();
			cout << "|Info| ";
			workers[i]->print_info(cout);
		}

		if (num == 2) {
			
			cout << "Enter type of product(1 - dairy products, 2 - meat, 3 - grocery): ";
			cin >> temp;
			if (temp == 1) {
				type_of_product = "dairy products";
			}
			if (temp == 2) {
				type_of_product = "meat";
			}
			if (temp == 3) {
				type_of_product = "grocery";
			}
			Merchandaser* m = new Merchandaser(name, age, type_of_product);
			cin.ignore();
			workers.push_back(m);
			cout << workers[i]->getName() << endl;
			workers[i]->print_position();
			cout << "|Info| ";
			workers[i]->print_info(cout);
		}

		if (num == 3) {
			
			cout << "Enter specialty(1 - cashier in the meat section, 2 - cashier, 3 - cashier in fish section): ";
			cin >> temp;
			if (temp == 1) {
				specialty = "cashier in the meat section";
			}
			if (temp == 2) {
				specialty = "cashier";
			}
			if (temp == 3) {
				specialty = "cashier in fish section";
			}
			Cashier* cash = new Cashier(name, age, specialty);
			cin.ignore();
			workers.push_back(cash);
			cout << workers[i]->getName() << endl;
			workers[i]->print_position();
			cout << "|Info| ";
			workers[i]->print_info(cout);
		}


	}
	

	sort(workers.begin(), workers.end());
	for (int i = 0; i < n; i++) {
		cout << *workers[i] << endl;
		delete workers[i];
	}
}




