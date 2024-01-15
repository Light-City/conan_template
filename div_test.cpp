#include <gtest/gtest.h>
double divide(double a, double b) { return b == 0 ? 0 : a / b; }

TEST(Div, NonZero) {
  double expected = 1.5;
  double actual = divide(3, 2);
  ASSERT_EQ(expected, actual);
}

TEST(Div, Zero) {
  double expected = 0;
  double actual = divide(3, 0);
  ASSERT_EQ(expected, actual);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
