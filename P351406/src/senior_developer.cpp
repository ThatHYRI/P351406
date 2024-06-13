#include "../include/senior_developer.hpp"
#include <iostream>

// Constructor for SeniorDeveloper class
SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias)
    // Calls base class constructor to initialize name & alias
    : Developer(name, alias) {}

// Implementation of solve_problem method for SeniorDeveloper
void SeniorDeveloper::solve_problem() {
    std::cout << "Solving problem as a Senior Developer...\n";
    drink_coffee();
}
