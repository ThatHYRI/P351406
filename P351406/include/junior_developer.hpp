#ifndef JUNIOR_DEVELOPER_HPP
#define JUNIOR_DEVELOPER_HPP

#include "developer.hpp"

class JuniorDeveloper : public Developer {
public:
    JuniorDeveloper(const std::string& name, const std::string& alias);
    ~JuniorDeveloper();
    void solve_problem() override; // Override the pure virtual function from Developer
};

#endif
