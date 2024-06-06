#include <iostream>
#include <vector>
#include <memory> // For shared_ptr
#include "developer.hpp" // Include Developer class definition
#include "junior_developer.hpp" // Include JuniorDeveloper class definition
#include "senior_developer.hpp" // Include SeniorDeveloper class definition

int main() {
    // 1. Ein vector von shared pointer anlegen
    std::vector<std::shared_ptr<Developer>> developers;

    // 2. Mindestens ein Objekt der Klasse SeniorDeveloper und ein Objekt der Klasse JuniorDeveloper instanziieren
    auto seniorDev = std::make_shared<SeniorDeveloper>("Diana Prince", "Wonder Woman");
    auto juniorDev = std::make_shared<JuniorDeveloper>("Peter Parker", "Spiderman");

    // 3. Alle Objekte dem vector hinzufügen
    developers.push_back(seniorDev);
    developers.push_back(juniorDev);

    // 4. Über den vector iterieren und die solve_problem Methode aufrufen
    for (auto& dev : developers) {
        std::cout << "Solving a problem:" << std::endl;
        dev->solve_problem();
        std::cout << std::endl;
    }

    return 0;
}
