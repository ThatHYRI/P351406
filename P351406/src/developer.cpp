#include "developer.hpp"
#include <iostream>
#include <fstream>
#include <stdexcept>

#ifndef LOGO_PATH
#define LOGO_PATH ""
#endif

// Constructor
Developer::Developer(const std::string& name, const std::string& alias)
    : name_(name), alias_(alias) {}

// Destructor
Developer::~Developer() {}

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

// Load a logo from a file
/*void Developer::load_logo_from_file(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Invalid file name");
    }
    std::getline(file, logo_);
    file.close();
}*/


// Load a logo from a file
void Developer::load_logo_from_file(const std::string& filename) {
    std::string full_path = LOGO_PATH + filename;
    std::ifstream file(full_path);
    if (!file.is_open()) {
        throw std::runtime_error("Invalid file name");
    }
    std::getline(file, logo_);
    file.close();
}