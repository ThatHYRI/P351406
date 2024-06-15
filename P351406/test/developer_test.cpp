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

// Helper function to create a temporary logo file for testing
void create_temp_logo_file(const std::string& path, const std::string& content) {
    std::ofstream file(path);
    file << content;
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

// Test the load_logo_from_file method
TEST(DeveloperTest, LoadLogoFromFile) {
    const std::string tempFilePath = "./temp_logo.txt";
    const std::string logoContent = "This is a logo.";

    // Step 1: Ensure logo is empty before loading
    JuniorDeveloper dev("John Doe", "johnd");
    EXPECT_EQ(dev.get_logo(), "");

    // Step 2: Load logo from a valid file and check the content
    create_temp_logo_file(tempFilePath, logoContent);
    dev.load_logo_from_file(tempFilePath);
    EXPECT_EQ(dev.get_logo(), logoContent);

    // Cleanup the temporary file
    std::remove(tempFilePath.c_str());
}