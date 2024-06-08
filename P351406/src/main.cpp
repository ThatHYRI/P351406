/*#include <iostream>
#include <vector>
#include <memory> // For shared_ptr
#include "developer.hpp" // Include Developer class definition
#include "junior_developer.hpp" // Include JuniorDeveloper class definition
#include "senior_developer.hpp" // Include SeniorDeveloper class definition

int main() {
    // 1. Create a vector of shared pointers
    std::vector<std::shared_ptr<Developer>> developers;

    // 2. Instantiate at least one object of SeniorDeveloper class and one object of JuniorDeveloper class
    auto seniorDev = std::make_shared<SeniorDeveloper>("Diana Prince", "Wonder Woman");
    auto juniorDev = std::make_shared<JuniorDeveloper>("Peter Parker", "Spiderman");

    // 3. Add all objects to the vector
    developers.push_back(seniorDev);
    developers.push_back(juniorDev);

    // 4. Iterate over the vector and call the solve_problem method
    for (auto& dev : developers) {
        std::cout << "Solving a problem:" << std::endl;
        dev->solve_problem();
        std::cout << std::endl;
    }

    return 0;
}*/



#include <iostream>
#include <vector>
#include <memory> // For shared_ptr
#include "developer.hpp" // Include Developer class definition
#include "junior_developer.hpp" // Include JuniorDeveloper class definition
#include "senior_developer.hpp" // Include SeniorDeveloper class definition

int main() {
    // 1. Create a vector of shared pointers
    std::vector<std::shared_ptr<Developer>> developers;

    // 2. Instantiate at least one object of SeniorDeveloper and one object of JuniorDeveloper
    auto seniorDev = std::make_shared<SeniorDeveloper>("Diana Prince", "Wonder Woman");
    auto juniorDev = std::make_shared<JuniorDeveloper>("Peter Parker", "Spiderman");

    // 3. Add all objects to the vector
    developers.push_back(seniorDev);
    developers.push_back(juniorDev);

    // 4. Iterate over the vector and call the solve_problem method
    for (auto& dev : developers) {
        std::cout << "Solving a problem:" << std::endl;
        dev->solve_problem();
        std::cout << std::endl;
    }

    return 0;
}

