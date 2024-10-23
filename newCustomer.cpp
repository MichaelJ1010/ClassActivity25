#include "./newCustomer.hpp"
#include "./print.hpp"

#include <iostream>

using namespace std;

namespace customer {

	void newCustomer() { // asks customer to provide their id, name, and email for the struct

		string name;
		string email;
		string street;
		string city;
		short int zipcode;
		int idNumber;
		cout << "what's your id?" << endl;
		cin >> idNumber;
		cout << "what's your name" << endl;
		cin >> name;
		cout << "what's your email?" << endl;
		cin >> email;
		cout << "Street: " << street << endl;
		cin >> street;
		cout << "City: " << city << endl;
		cin >> city;
		cout << "Zipcode: " << endl;
		cin >> zipcode;

		Customer customer = { idNumber, name, email, {street, city, zipcode} };
		

		printer::print(customer);

	}

}