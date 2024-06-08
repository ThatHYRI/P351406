//0 add class Developer as basis for JuniorDev and SeniorDev (inheritance). Things below should be in class developer.

//1 Name

//2 Alias

//3 Logo

//4 Constructor for 2 persons with name and alias. The logo should be outside of the constructor

//5 Static method drink_coffee with Output:"Gimme that caffeine"

//6 Save logo in membervariable "load_logo_from_file"

//7 Wrong Name -> runtime_error_Exception 
//6+7 Add text with compiler definition to CMakeLists.txt

//8 getter-method for member

//9 virtual-method "solve_problem"

/*#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include <string>

class Developer {
public:
    Developer(const std::string& name, const std::string& alias);
    virtual ~Developer();

    virtual void solve_problem() = 0;
    std::string get_name() const;
    std::string get_alias() const;

    static void drink_coffee();

protected:
    std::string name_;
    std::string alias_;
};

#endif // DEVELOPER_HPP*/

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

