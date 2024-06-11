#include "gtest/gtest.h"
#include "developer.hpp"
#include "junior_developer.hpp"
#include "senior_developer.hpp"
#include <sstream>

// Test the load_logo_from_file method FAILED
TEST(DeveloperTest, LoadLogoFromFile) {
    JuniorDeveloper dev("John Doe", "johnd");
    try {
        dev.load_logo_from_file(DEVELOPER_LOGO_PATH "logo.txt");
    } catch (const std::runtime_error& e) {
        FAIL() << "Exception thrown: " << e.what();
    }

    // Debug output
    std::cout << "Loaded logo: " << dev.get_logo() << std::endl;

    // Assuming the logo file contains "Sample Logo"
    EXPECT_EQ(dev.get_logo(), "Sample Logo");
}

// Test the stream operator FAILED
TEST(DeveloperTest, StreamOperator) {
    JuniorDeveloper dev("John Doe", "johnd");
    std::ostringstream oss;
    oss << dev;
    std::string expected_output = "Name: John Doe\nAlias: johnd\n";
    EXPECT_EQ(oss.str(), expected_output);

    // If a logo was loaded
    try {
        dev.load_logo_from_file(DEVELOPER_LOGO_PATH "logo.txt");
    } catch (const std::runtime_error& e) {
        FAIL() << "Exception thrown: " << e.what();
    }

    // Debug output
    std::cout << "Loaded logo: " << dev.get_logo() << std::endl;

    oss.str(""); // Clear the stream
    oss << dev;
    expected_output = "Name: John Doe\nAlias: johnd\nLogo: Sample Logo\n";
    EXPECT_EQ(oss.str(), expected_output);
}
