/*#include "junior_developer.hpp"
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
}*/


//OTHER VERSION

#include "junior_developer.hpp"
#include <iostream>
#include <fstream> // For data operations
#include <stdexcept> // For exceptions

// Constructor
JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {
    // Implementing Constructor
}

// Destructor
JuniorDeveloper::~JuniorDeveloper() {
    // Implementing Destructor
}

// Implementing solve_problem method
void JuniorDeveloper::solve_problem() {
    // Execute specific solution logic for junior dev
    std::cout << "Name: " << get_name() << std::endl;
    std::cout << "Alias: " << get_alias() << std::endl;
    std::cout << "Solving problem as a Junior Developer..." << std::endl;
    Developer::drink_coffee(); // Calling method from base class

    // Load and print logo
    try {
        load_logo_from_file("logos/Logo.txt");
    } catch (const std::runtime_error& e) {
        std::cerr << "Error loading logo: " << e.what() << std::endl;
    }
}

// Load logo from file
void JuniorDeveloper::load_logo_from_file(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Failed to open file: " + filename);
    }

    std::string logo;
    getline(file, logo);

    std::cout << "Logo: " << logo << std::endl;
}
