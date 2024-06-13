#include "../include/junior_developer.hpp"
#include <iostream>

// Constructor for JuniorDeveloper class
JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias)
    // Calls base class constructor to initialize name & alias
    : Developer(name, alias) {}

// Implementation of solve_problem method for JuniorDeveloper
void JuniorDeveloper::solve_problem() {
    std::cout << "Solving problem as a Junior Developer...\n";
    drink_coffee();
}
