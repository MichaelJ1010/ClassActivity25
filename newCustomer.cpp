#include "./newCustomer.hpp"
#include "./print.hpp"

#include <iostream>

using namespace std;

namespace customer {

	void newCustomer() { // asks customer to provide their id, name, and email for the struct
		Customer customer;
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

		
		customer.id = idNumber;
		customer.name = name;
		customer.email = email;
		printer::print(customer);

	}

}