
#ifndef SDDS_UTILITIES_H
#define SDDS_UTILITIES_H

#include "Vehicle.h"
namespace sdds {
	Vehicle* createInstance(std::istream& in);
	std::string& trim(std::string&);
} // namespace sdds
#endif //! SDDS_UTILITIES_H