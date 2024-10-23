#ifndef NEWCUSTOMER_H
#define NEWCUSTOMER_H

#include <string>

namespace customer {
	struct Customer {
		int id;
		std::string name;
		std::string email;
	};

	void newCustomer();
}

#endif