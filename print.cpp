#include <iostream>
#include "./newCustomer.hpp"

using namespace std;

namespace printer {

	void print(customer::Customer customer) { // prints out the customer struct
		cout << customer.id << endl;
		cout << customer.name << endl;
		cout << customer.email << endl;
		cout << customer.address.street << endl;
		cout << customer.address.city << endl;
		cout << customer.address.zipcode << endl;
	}
}