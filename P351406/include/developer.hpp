#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include <string>
#include <iostream>

class Developer {
public:
    Developer(const std::string& name, const std::string& alias);
    virtual ~Developer() = default;

    std::string get_name() const;
    std::string get_alias() const;
    std::string get_logo() const;

    void load_logo_from_file(const std::string& path);

    virtual void solve_problem() = 0;

    void drink_coffee() const;

protected:
    std::string name_;
    std::string alias_;
    std::string logo_;
};

std::ostream& operator<<(std::ostream& os, const Developer& dev);

#endif // DEVELOPER_HPP
