#include <gtest/gtest.h>
#include "../include/junior_developer.hpp"
#include "../include/senior_developer.hpp"
#include <fstream>

// Helper function to capture standard output
std::string capture_stdout(std::function<void()> func) {
    std::ostringstream oss;
    auto old_buf = std::cout.rdbuf(oss.rdbuf());
    func();
    std::cout.rdbuf(old_buf);
    return oss.str();
}

// Test the constructor of the JuniorDeveloper class
TEST(DeveloperTest, Constructor) {
    JuniorDeveloper dev("John Doe", "johnd");
    EXPECT_EQ(dev.get_name(), "John Doe");
    EXPECT_EQ(dev.get_alias(), "johnd");
}

// Test the get_name method of the JuniorDeveloper class
TEST(DeveloperTest, GetName) {
    JuniorDeveloper dev("John Doe", "johnd");
    EXPECT_EQ(dev.get_name(), "John Doe");
}

// Test the get_alias method of the JuniorDeveloper class
TEST(DeveloperTest, GetAlias) {
    JuniorDeveloper dev("John Doe", "johnd");
    EXPECT_EQ(dev.get_alias(), "johnd");
}

// Test the drink_coffee method of the JuniorDeveloper class
TEST(DeveloperTest, DrinkCoffee) {
    JuniorDeveloper dev("John Doe", "johnd");
    std::string output = capture_stdout([&] { dev.drink_coffee(); });
    EXPECT_EQ(output, "Ahhhh, I needed that coffee!!!\n");
}

// Test loading a logo from an invalid file path
TEST(DeveloperTest, LoadLogoFromFileInvalid) {
    JuniorDeveloper dev("John Doe", "johnd");
    EXPECT_THROW(dev.load_logo_from_file("invalid_path/logo.txt"), std::runtime_error);
}
