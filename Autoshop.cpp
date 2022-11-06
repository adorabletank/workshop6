#include "Autoshop.h"

namespace sdds {
    // Add a vehicle to the vector
    Autoshop& Autoshop::operator+=(Vehicle* vehicle) {
        if (vehicle != nullptr) {
            m_vehicles.push_back(vehicle);
        }
        return *this;
    }

    // Display each vehicle stored in the autoshop
    void Autoshop::display(std::ostream& out) const {
        for (auto c = m_vehicles.cbegin(); c != m_vehicles.cend(); ++c) {
            (*c)->display(out);
            out << std::endl;
        }
    }

    // Destructor
    Autoshop::~Autoshop() {
        for (auto v = m_vehicles.begin(); v != m_vehicles.end(); ++v) {
            delete* v;
        }
        for (auto v = m_lvehicles.begin(); v != m_lvehicles.end(); ++v) {
            delete* v;
        }
    }
} // namespace sdds