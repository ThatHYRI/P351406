#include "../include/senior_developer.hpp"
#include <iostream>

SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {}

void SeniorDeveloper::solve_problem() {
    std::cout << "Solving problem as a Senior Developer...\n";
    drink_coffee();
}
