#include "developer.hpp"
#include <iostream>
#include <fstream>
#include <stdexcept>

// Constructor
Developer::Developer(const std::string& name, const std::string& alias)
    : name_(name), alias_(alias) {}

// Destructor
Developer::~Developer() {}

// Load a logo from a file
void Developer::load_logo_from_file(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Invalid file name");
    }
    std::getline(file, logo_, '\0');  // Read the entire file content
    file.close();
}

// Get the logo of the developer
std::string Developer::get_logo() const {
    return logo_;
}

// Overload the stream insertion operator
std::ostream& operator<<(std::ostream& os, const Developer& dev) {
    //os << "Name: " << dev.get_name() << std::endl;
    //os << "Alias: " << dev.get_alias() << std::endl;
    os << dev.logo_ << std::endl;
    return os;
}

// Get the name of the developer
std::string Developer::get_name() const {
    return name_;
}

// Get the alias of the developer
std::string Developer::get_alias() const {
    return alias_;
}

// Static method to simulate drinking coffee
void Developer::drink_coffee() {
    std::cout << "Ahhhh, I needed that coffee!!!" << std::endl;
}

