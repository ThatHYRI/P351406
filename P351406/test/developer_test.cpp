#include "developer.hpp"
#include <gtest/gtest.h>
#include <fstream>

// Test the Developer constructor
TEST(DeveloperTest, Constructor) {
    Developer dev("John Doe", "johnd");
    EXPECT_EQ(dev.get_name(), "John Doe");
    EXPECT_EQ(dev.get_alias(), "johnd");
}

// Test the get_name method
TEST(DeveloperTest, GetName) {
    Developer dev("John Doe", "johnd");
    EXPECT_EQ(dev.get_name(), "John Doe");
}

// Test the get_alias method
TEST(DeveloperTest, GetAlias) {
    Developer dev("John Doe", "johnd");
    EXPECT_EQ(dev.get_alias(), "johnd");
}

// Test the drink_coffee method
TEST(DeveloperTest, DrinkCoffee) {
    // Since drink_coffee only prints to the console, we cannot directly test it.
    // In a real-world scenario, you might redirect stdout and test the output.
}

// Test the load_logo_from_file method
TEST(DeveloperTest, LoadLogoFromFile) {
    // Create a temporary file with a logo
    std::ofstream outfile("test_logo.txt");
    outfile << "Test Logo Content";
    outfile.close();

    Developer dev("John Doe", "johnd");
    dev.load_logo_from_file("test_logo.txt");
    std::remove("test_logo.txt"); // Clean up the file

    // Since we don't have a getter for the logo, we can't directly check it.
    // However, we can check that no exception is thrown for a valid file.
    EXPECT_NO_THROW(dev.load_logo_from_file("test_logo.txt"));

    // Test invalid file name
    EXPECT_THROW(dev.load_logo_from_file("invalid_file.txt"), std::runtime_error);
}

// Test the stream operator
TEST(DeveloperTest, StreamOperator) {
    Developer dev("John Doe", "johnd");

    // Create a temporary file with a logo
    std::ofstream outfile("test_logo.txt");
    outfile << "Test Logo Content";
    outfile.close();

    dev.load_logo_from_file("test_logo.txt");
    std::remove("test_logo.txt"); // Clean up the file

    std::stringstream ss;
    ss << dev;
    std::string expected_output = "Name: John Doe\nAlias: johnd\nLogo: Test Logo Content\n";
    EXPECT_EQ(ss.str(), expected_output);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
