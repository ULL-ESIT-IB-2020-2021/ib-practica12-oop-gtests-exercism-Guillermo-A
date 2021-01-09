#include <gtest/gtest.h>
#include "fecha.h"

TEST(IntegerFunctionTest, is_bisiesto) {
        EXPECT_STREQ("Es bisiesto", is_bisiesto(2000))
        EXPECT_STREQ("No es bisiesto", is_bisiesto(1999))
}