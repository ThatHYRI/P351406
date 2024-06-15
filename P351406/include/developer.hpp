#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include <string>
#include <iostream>

class Developer {
public:
    // Constructor for Developer class
    Developer(const std::string& name, const std::string& alias);
    // Virtual destructor for Developer class
    virtual ~Developer() = default;

    // Getter method for name, alias, logo
    std::string get_name() const;
    std::string get_alias() const;
    std::string get_logo() const;

    // Getter method for name
    void load_logo_from_file(const std::string& path);

    // Pure virtual method to solve a problem
    virtual void solve_problem() = 0;

    // Method to simulate drinking coffee
    void drink_coffee() const;

protected:
    // Member variable to store the name, alias & logo of the developer
    std::string name_;
    std::string alias_;
    std::string logo_;
};

// Overloaded insertion operator for Developer class
std::ostream& operator<<(std::ostream& os, const Developer& dev);

#endif // DEVELOPER_HPP
