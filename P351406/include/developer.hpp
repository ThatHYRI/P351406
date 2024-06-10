#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include <string>
#include <iostream>

class Developer {
public:
    Developer(const std::string& name, const std::string& alias);
    virtual ~Developer();

    std::string get_name() const;
    std::string get_alias() const;
    static void drink_coffee();
    void load_logo_from_file(const std::string& filename);
    std::string get_logo() const; 

    // Pure virtual function to be implemented by derived classes
    virtual void solve_problem() = 0;

    // Overload the stream insertion operator
    friend std::ostream& operator<<(std::ostream& os, const Developer& dev);

protected:
    std::string name_;
    std::string alias_;
    std::string logo_;
};

#endif // DEVELOPER_HPP
