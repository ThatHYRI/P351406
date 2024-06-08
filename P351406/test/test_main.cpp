#include <gtest/gtest.h>
#include "junior_developer.hpp"
#include "senior_developer.hpp"

// Test case for JuniorDeveloper
TEST(JuniorDeveloperTest, TestNameAndAlias) {
    JuniorDeveloper jd("Peter Parker", "Spiderman");
    EXPECT_EQ(jd.get_name(), "Peter Parker");
    EXPECT_EQ(jd.get_alias(), "Spiderman");
}

// Test case for SeniorDeveloper
TEST(SeniorDeveloperTest, TestNameAndAlias) {
    SeniorDeveloper sd("Diana Prince", "Wonder Woman");
    EXPECT_EQ(sd.get_name(), "Diana Prince");
    EXPECT_EQ(sd.get_alias(), "Wonder Woman");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
