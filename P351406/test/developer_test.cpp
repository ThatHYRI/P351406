#include <gtest/gtest.h>
#include "../include/junior_developer.hpp"
#include "../include/senior_developer.hpp"
#include <fstream>

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

TEST(DeveloperTest, LoadLogoFromFileInvalid) {
    JuniorDeveloper dev("John Doe", "johnd");
    EXPECT_THROW(dev.load_logo_from_file("invalid_path/logo.txt"), std::runtime_error);
}

TEST(DeveloperTest, DrinkCoffee) {
    JuniorDeveloper dev("John Doe", "johnd");
    dev.drink_coffee();
    // Check some side effect of drink_coffee if there is any
}
