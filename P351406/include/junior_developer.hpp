#ifndef JUNIOR_DEVELOPER_HPP
#define JUNIOR_DEVELOPER_HPP

// Include the base class header file
#include "developer.hpp"

// Define the JuniorDeveloper class inheriting from Developer
class JuniorDeveloper : public Developer {
public:
    // Constructor for JuniorDeveloper
    JuniorDeveloper(const std::string& name, const std::string& alias);
    // Override the solve_problem method from the base class
    void solve_problem() override;
};

#endif // JUNIOR_DEVELOPER_HPP
