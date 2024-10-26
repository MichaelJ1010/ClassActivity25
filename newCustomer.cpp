#include "./newCustomer.hpp"
#include "./print.hpp"

#include <iostream>
#include <string>

using namespace std;

namespace customer {

	void newCustomer() { // all information for struct is given here

		string name;
		string email;
		string street;
		string city;
		int zipcode;
		int idNumber;
		cout << "what's your id?" << endl;
		cin >> idNumber;
		cout << "what's your name" << endl;
		cin >> name;
		cout << "what's your email?" << endl;
		cin >> email;
		cout << "Street: ";
		cin.ignore();
		getline(cin, street);
		cout << endl << "City: " << endl;
		cin >> city;
		cout << "Zipcode: " << endl;
		cin >> zipcode;

		structure::Customer customer = { idNumber, name, email, {street, city, zipcode} };
		

		printer::print(customer);

	}

}