#include "./newCustomer.hpp"
#include "./print.hpp"

#include <iostream>

using namespace std;

namespace customer {

	void newCustomer() { // asks customer to provide their id, name, and email for the struct
		Customer customer;
		string name;
		string email;
		int idNumber;
		cout << "what's your id?" << endl;
		cin >> idNumber;
		cout << "what's your name" << endl;
		cin >> name;
		cout << "what's your email?" << endl;
		cin >> email;
		
		customer.id = idNumber;
		customer.name = name;
		customer.email = email;
		printer::print(customer);

	}

}