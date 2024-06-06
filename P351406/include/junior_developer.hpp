/*#ifndef JUNIOR_DEVELOPER_HPP
#define JUNIOR_DEVELOPER_HPP

#include "developer.hpp"

class JuniorDeveloper : public Developer {
public:
    JuniorDeveloper(const std::string& name, const std::string& alias);
    ~JuniorDeveloper() override;

    void solve_problem() override;
};

#endif // JUNIOR_DEVELOPER_HPP*/


//OTHER VERSION

#ifndef JUNIOR_DEVELOPER_HPP
#define JUNIOR_DEVELOPER_HPP

#include "developer.hpp"

class JuniorDeveloper : public Developer {
public:
    JuniorDeveloper(const std::string& name, const std::string& alias);
    ~JuniorDeveloper() override;

    void solve_problem() override;

private:
    void load_logo_from_file(const std::string& filename);
};

#endif // JUNIOR_DEVELOPER_HPP
