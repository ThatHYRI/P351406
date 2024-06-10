#include "gtest/gtest.h"
#include "developer.hpp"
#include "junior_developer.hpp"
#include "senior_developer.hpp"

// Test the constructor
TEST(DeveloperTest, Constructor) {
    JuniorDeveloper dev("John Doe", "johnd");
    EXPECT_EQ(dev.get_name(), "John Doe");
    EXPECT_EQ(dev.get_alias(), "johnd");
}

// Test the get_name method
TEST(DeveloperTest, GetName) {
    JuniorDeveloper dev("John Doe", "johnd");
    EXPECT_EQ(dev.get_name(), "John Doe");
}

// Test the get_alias method
TEST(DeveloperTest, GetAlias) {
    JuniorDeveloper dev("John Doe", "johnd");
    EXPECT_EQ(dev.get_alias(), "johnd");
}

// Test the load_logo_from_file method
TEST(DeveloperTest, LoadLogoFromFile) {
    JuniorDeveloper dev("John Doe", "johnd");
    dev.load_logo_from_file(DEVELOPER_LOGO_PATH "logo.txt");
    // Assuming the logo file contains "Sample Logo"
    EXPECT_EQ(dev.get_logo(), "Sample Logo");
}

// Test the stream operator
TEST(DeveloperTest, StreamOperator) {
    JuniorDeveloper dev("John Doe", "johnd");
    std::ostringstream oss;
    oss << dev;
    std::string expected_output = "Name: John Doe\nAlias: johnd\n";
    EXPECT_EQ(oss.str(), expected_output);

    // If a logo was loaded
    dev.load_logo_from_file(DEVELOPER_LOGO_PATH "logo.txt");
    oss.str(""); // Clear the stream
    oss << dev;
    expected_output = "Name: John Doe\nAlias: johnd\nLogo: Sample Logo\n";
    EXPECT_EQ(oss.str(), expected_output);
}
