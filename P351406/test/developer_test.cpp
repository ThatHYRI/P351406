#include <gtest/gtest.h>
#include "junior_developer.hpp"
#include "senior_developer.hpp"
#include <sstream>
#include <fstream>
#include <stdexcept>

TEST(DeveloperTest, Constructor) {
    JuniorDeveloper dev("John Doe", "johnd");
    EXPECT_EQ(dev.get_name(), "John Doe");
    EXPECT_EQ(dev.get_alias(), "johnd");
}

TEST(DeveloperTest, GetName) {
    JuniorDeveloper dev("John Doe", "johnd");
    EXPECT_EQ(dev.get_name(), "John Doe");
}

TEST(DeveloperTest, GetAlias) {
    JuniorDeveloper dev("John Doe", "johnd");
    EXPECT_EQ(dev.get_alias(), "johnd");
}

TEST(DeveloperTest, LoadLogoFromFile) {
    JuniorDeveloper dev("John Doe", "johnd");
    std::ofstream outfile(DEVELOPER_LOGO_PATH "logo.txt");
    outfile << "Sample Logo";
    outfile.close();

    dev.load_logo_from_file(DEVELOPER_LOGO_PATH "logo.txt");
    // Assuming the logo file contains "Sample Logo"
    EXPECT_EQ(dev.get_logo(), "Sample Logo");
}

TEST(DeveloperTest, LoadLogoFromFileInvalid) {
    JuniorDeveloper dev("John Doe", "johnd");
    EXPECT_THROW(dev.load_logo_from_file(DEVELOPER_LOGO_PATH "invalid_logo.txt"), std::runtime_error);
}

TEST(DeveloperTest, StreamOperator) {
    JuniorDeveloper dev("John Doe", "johnd");
    std::ostringstream oss;
    oss << dev;
    std::string expected_output = "Name: John Doe\nAlias: johnd\n";
    EXPECT_EQ(oss.str(), expected_output);

    // If a logo was loaded
    std::ofstream outfile(DEVELOPER_LOGO_PATH "logo.txt");
    outfile << "Sample Logo";
    outfile.close();

    dev.load_logo_from_file(DEVELOPER_LOGO_PATH "logo.txt");
    oss.str(""); // Clear the stream
    oss << dev;
    expected_output = "Name: John Doe\nAlias: johnd\nLogo: Sample Logo\n";
    EXPECT_EQ(oss.str(), expected_output);
}

TEST(DeveloperTest, DrinkCoffee) {
    testing::internal::CaptureStdout();
    Developer::drink_coffee();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Ahhhh, I needed that coffee!!!\n");
}

TEST(JuniorDeveloperTest, SolveProblem) {
    JuniorDeveloper dev("John Doe", "johnd");
    testing::internal::CaptureStdout();
    dev.solve_problem();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Solving problem as a Junior Developer...\n");
}

TEST(SeniorDeveloperTest, SolveProblem) {
    SeniorDeveloper dev("Jane Doe", "janed");
    testing::internal::CaptureStdout();
    dev.solve_problem();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Solving problem as a Senior Developer...\n");
}

