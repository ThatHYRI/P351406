#include "junior_developer.hpp"
#include <iostream>

// Constructor
JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {}

// Destructor
JuniorDeveloper::~JuniorDeveloper() {}

// Implementation of the solve_problem method
void JuniorDeveloper::solve_problem() {
    // Specific problem-solving logic for Junior Developer
    std::cout << "Name: " << get_name() << std::endl;
    std::cout << "Alias: " << get_alias() << std::endl;
    std::cout << "Solving problem as a Junior Developer..." << std::endl;
    Developer::drink_coffee(); // Call the method from the base class
}
