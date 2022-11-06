
#ifndef SDDS_CAR_H
#define SDDS_CAR_H

#include "Vehicle.h"

namespace sdds {
    class Car : public Vehicle
    {
        enum Condition { New, Used, Broken };
        std::string m_maker{};
        Condition m_condition{};
        double m_topSpeed{};

    public:
        Car();
        Car(std::istream& is);
        std::string condition() const;
        double topSpeed() const;
        void display(std::ostream& out) const;
    };
} // namespace sdds

#endif //! SDDS_CAR_H