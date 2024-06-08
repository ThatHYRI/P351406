/*#include "senior_developer.hpp"
#include <iostream>

// Constructor
SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {
    // Implementierung des Konstruktors
}

// Implementierung der solve_problem Methode
void SeniorDeveloper::solve_problem() {
    // Führe spezifische Lösungslogik für Senior-Entwickler aus
    std::cout << "Name: " << get_name() << std::endl;
    std::cout << "Alias: " << get_alias() << std::endl;
    std::cout << "Solving problem as a Senior Developer..." << std::endl;
    Developer::drink_coffee(); // Aufruf der Methode aus der Basisklasse
}

// Implementierung der getter-Methoden
std::string SeniorDeveloper::get_name() const {
    return Developer::get_name();
}

std::string SeniorDeveloper::get_alias() const {
    return Developer::get_alias();
}*/


//SECOND VERSION

/*#include "senior_developer.hpp"
#include <iostream>

// Constructor
SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {
    // Implementation of the constructor
}

// Destructor
SeniorDeveloper::~SeniorDeveloper() {
    // Implementation of the destructor
}

// Implementation of the solve_problem method
void SeniorDeveloper::solve_problem() {
    // Execute specific problem-solving logic for senior developers
    std::cout << "Name: " << get_name() << std::endl;
    std::cout << "Alias: " << get_alias() << std::endl;
    std::cout << "Solving problem as a Senior Developer..." << std::endl;
    Developer::drink_coffee(); // Call the method from the base class
}*/




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

