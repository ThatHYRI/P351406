#include "../include/developer.hpp"
#include <fstream>
#include <sstream>

// Constructor for Developer class
Developer::Developer(const std::string& name, const std::string& alias)
    // Initializes name & alias members
    : name_(name), alias_(alias) {}

// Returns name, alias & logo of developer
std::string Developer::get_name() const {
    return name_;
}

std::string Developer::get_alias() const {
    return alias_;
}

std::string Developer::get_logo() const {
    return logo_;
}

// Overloaded stream insertion operator for Developer class
std::ostream& operator<<(std::ostream& os, const Developer& dev) {
    os << "Name: " << dev.get_name() << '\n';
    os << "Alias: " << dev.get_alias() << '\n';
    if (!dev.get_logo().empty()) {
        os << dev.get_logo() << '\n';
    }
    return os;
}

// Loads the logo from a file
void Developer::load_logo_from_file(const std::string& path) {
    std::ifstream file(path);
    if (!file) {
        throw std::runtime_error("Invalid file name");
    }
    std::stringstream buffer;
    buffer << file.rdbuf();
    logo_ = buffer.str();
}

// Simulates drinking coffee
void Developer::drink_coffee() const {
    std::cout << "Ahhhh, I needed that coffee!!!\n";
}
