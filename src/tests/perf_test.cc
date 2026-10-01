#include "aim/core/perf.h"

#include "gtest/gtest.h"

using namespace aim;

TEST(PerfTest, ElapsedMicrosBetweenNanos) {
  EXPECT_EQ(ElapsedMicrosBetweenNanos(1000000, 2500000), 1500);
  EXPECT_EQ(ElapsedMicrosBetweenNanos(1000000, 1000999), 0);
}

TEST(PerfTest, InvalidTimestampDeltaIsZero) {
  EXPECT_EQ(ElapsedMicrosBetweenNanos(0, 2500000), 0);
  EXPECT_EQ(ElapsedMicrosBetweenNanos(2500000, 1000000), 0);
  EXPECT_EQ(ElapsedMicrosBetweenNanos(1000000, 1000000), 0);
}
