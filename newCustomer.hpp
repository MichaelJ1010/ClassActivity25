#ifndef NEWCUSTOMER_H
#define NEWCUSTOMER_H

#include <string>

namespace customer {
	struct Address {
		std::string street;
		std::string city;
		short int zipcode;
	};

	struct Customer {
		int id;
		std::string name;
		std::string email;
		Address address;
	};

	void newCustomer();
}

#endif