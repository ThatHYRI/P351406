#include "junior_developer.hpp"
#include <iostream>

// Constructor
JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {}

// Destructor
JuniorDeveloper::~JuniorDeveloper() {}

// Implement solve_problem method
void JuniorDeveloper::solve_problem() {
    std::cout << "Name: " << get_name() << std::endl;
    std::cout << "Alias: " << get_alias() << std::endl;
    std::cout << "Solving problem as a Junior Developer..." << std::endl;
    Developer::drink_coffee(); // Call method from base class
}

