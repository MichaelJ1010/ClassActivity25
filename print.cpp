#include <iostream>
#include "./customer.hpp"

using namespace std;

namespace printer {

	void print(structure::Customer customer) { // prints out the customer struct
		cout << "ID: " << customer.id << endl;
		cout << "Name: " << customer.name << endl;
		cout << "Email: " << customer.email << endl;
		cout << "Address: " << customer.address.street << ", ";
		cout << customer.address.city << ", ";
		cout << customer.address.zipcode << endl;
	}
}