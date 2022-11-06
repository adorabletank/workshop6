
#include "Racecar.h"

namespace sdds {
    // Reads values from an input stream to member variables
    Racecar::Racecar(std::istream& in) : Car(in) {
        std::string token{};
        std::getline(in, token);
        m_booster = std::stod(token);
    }
    void Racecar::display(std::ostream& out) const {
        Car::display(out);
        out << "*";
    }
    double Racecar::topSpeed() const {
        return Car::topSpeed() + (Car::topSpeed() * m_booster);
    }

} // namespace sdds