#include "senior_developer.hpp"
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
}


//SECOND VERSION

#include "senior_developer.hpp"
#include <iostream>

// Constructor
SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {
    // Implementierung des Konstruktors
}

// Destructor
SeniorDeveloper::~SeniorDeveloper() {
    // Implementierung des Destructors
}

// Implementierung der solve_problem Methode
void SeniorDeveloper::solve_problem() {
    // Führe spezifische Lösungslogik für Senior-Entwickler aus
    std::cout << "Name: " << get_name() << std::endl;
    std::cout << "Alias: " << get_alias() << std::endl;
    std::cout << "Solving problem as a Senior Developer..." << std::endl;
    Developer::drink_coffee(); // Aufruf der Methode aus der Basisklasse
}
