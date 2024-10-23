#include <iostream>
#include "./newCustomer.hpp"

using namespace std;

namespace printer {

	void print(customer::Customer customer) { // prints out the customer struct
		cout << endl << "id: " << customer.id << endl;
		cout << "name: " << customer.name << endl;
		cout << "email: " << customer.email << endl;
	}
}