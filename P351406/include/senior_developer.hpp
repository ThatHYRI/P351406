#ifndef SENIOR_DEVELOPER_HPP
#define SENIOR_DEVELOPER_HPP

#include "developer.hpp"

class SeniorDeveloper : public Developer {
public:
    SeniorDeveloper(const std::string& name, const std::string& alias);
    ~SeniorDeveloper() override;

    void solve_problem() override;
};

#endif // SENIOR_DEVELOPER_HPP
