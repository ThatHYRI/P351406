#include "junior_developer.hpp"
#include <iostream>

// Constructor
JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {
    // Implementierung des Konstruktors
}

// Destructor
JuniorDeveloper::~JuniorDeveloper() {
    // Implementierung des Destructors
}

// Implementierung der solve_problem Methode
void JuniorDeveloper::solve_problem() {
    // Führe spezifische Lösungslogik für Junior-Entwickler aus
    std::cout << "Name: " << get_name() << std::endl;
    std::cout << "Alias: " << get_alias() << std::endl;
    std::cout << "Solving problem as a Junior Developer..." << std::endl;
    Developer::drink_coffee(); // Aufruf der Methode aus der Basisklasse
}
