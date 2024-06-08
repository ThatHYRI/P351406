#include "senior_developer.hpp"
#include <iostream>

// Constructor
SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {}

// Destructor
SeniorDeveloper::~SeniorDeveloper() {}

// Implement solve_problem method
void SeniorDeveloper::solve_problem() {
    std::cout << "Name: " << get_name() << std::endl;
    std::cout << "Alias: " << get_alias() << std::endl;
    std::cout << "Solving problem as a Senior Developer..." << std::endl;
    Developer::drink_coffee(); // Call method from base class
}

