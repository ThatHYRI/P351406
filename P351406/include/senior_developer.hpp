#ifndef SENIOR_DEVELOPER_HPP
#define SENIOR_DEVELOPER_HPP

// Include the base class header file
#include "developer.hpp"

// Define the SeniorDeveloper class inheriting from Developer
class SeniorDeveloper : public Developer {
public:
    // Constructor for SeniorDeveloper
    SeniorDeveloper(const std::string& name, const std::string& alias);
    // Override the solve_problem method from the base class
    void solve_problem() override;
};

#endif // SENIOR_DEVELOPER_HPP
