#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "./address.hpp"

namespace structure {
	struct Customer {
		int id;
		std::string name;
		std::string email;
		location::Address address;
};

}


#endif
