#include "senior_developer.hpp"
#include <iostream>

// Constructor
SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {}

// Destructor
SeniorDeveloper::~SeniorDeveloper() {}

// Implementation of the solve_problem method
void SeniorDeveloper::solve_problem() {
    // Specific problem-solving logic for Senior Developer
    std::cout << "Name: " << get_name() << std::endl;
    std::cout << "Alias: " << get_alias() << std::endl;
    std::cout << "Solving problem as a Senior Developer..." << std::endl;
    Developer::drink_coffee(); // Call the method from the base class
}
