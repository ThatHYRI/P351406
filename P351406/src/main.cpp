#include <iostream>
#include <vector>
#include <memory> // For shared_ptr
#include "developer.hpp" // Include Developer class definition
#include "junior_developer.hpp" // Include JuniorDeveloper class definition
#include "senior_developer.hpp" // Include SeniorDeveloper class definition

int main() {
    // 1. Create a vector of shared pointers to Developer
    std::vector<std::shared_ptr<Developer>> developers;

    // 2. Instantiate at least one object of the SeniorDeveloper and JuniorDeveloper classes
    auto seniorDev = std::make_shared<SeniorDeveloper>("Matthies Otten", "The Otter");
    auto juniorDev = std::make_shared<JuniorDeveloper>("Hai Nam Nguyen", "The DOOM Slayer");

    // Load logos from files
    try {
        seniorDev->load_logo_from_file("../logos/senior_logo.txt");
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        juniorDev->load_logo_from_file("../logos/junior_logo.txt");
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    // 3. Add all objects to the vector
    developers.push_back(seniorDev);
    developers.push_back(juniorDev);

    // 4. Iterate over the vector and call the solve_problem method
    for (auto& dev : developers) {
        std::cout << "Solving a problem:" << std::endl;
        dev->solve_problem();
        std::cout << *dev << std::endl;  // Use the overloaded stream operator to print developer details
        std::cout << std::endl;
    }

    return 0;
}
