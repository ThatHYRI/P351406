#pragma once

#include "developer.hpp"

class JuniorDeveloper : public Developer {
public:
    JuniorDeveloper(const std::string& name, const std::string& alias);
    ~JuniorDeveloper();

    void solve_problem() override;
};

