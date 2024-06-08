#pragma once

#include <string>

class Developer {
public:
    Developer(const std::string& name, const std::string& alias);
    virtual ~Developer();

    std::string get_name() const;

    std::string get_alias() const;

    static void drink_coffee();

    void load_logo_from_file(const std::string& filename);

    virtual void solve_problem() = 0;

private:
    std::string name_;
    std::string alias_;
    std::string logo_;
};

