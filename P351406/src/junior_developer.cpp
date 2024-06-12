#include "../include/junior_developer.hpp"
#include <iostream>

JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {}

void JuniorDeveloper::solve_problem() {
    std::cout << "Solving problem as a Junior Developer...\n";
    drink_coffee();
}
