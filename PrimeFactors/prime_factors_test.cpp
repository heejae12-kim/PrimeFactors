#include "gmock/gmock.h"
#include "prime_factors.cpp"
using namespace testing;

class PrimeFixture : public Test {
public:
	PrimeFactors* primefactor = new PrimeFactors();
	vector<int> expected;
};


TEST_F(PrimeFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, primefactor->of(1));
}

TEST_F(PrimeFixture, Of2) {
	expected = { 2 };
	EXPECT_EQ(expected, primefactor->of(2));
}

TEST_F(PrimeFixture, Of3) {
	expected = { 3 };
	EXPECT_EQ(expected, primefactor->of(3));
}

TEST_F(PrimeFixture, Of4) {
	expected = { 2, 2 };
	EXPECT_EQ(expected, primefactor->of(4));
}
TEST_F(PrimeFixture, Of5) {
	expected = { 5 };
	EXPECT_EQ(expected, primefactor->of(5));
}
TEST_F(PrimeFixture, Of6) {
	expected = { 2, 3 };
	EXPECT_EQ(expected, primefactor->of(6));
}
TEST_F(PrimeFixture, Of7) {
	expected = { 7 };
	EXPECT_EQ(expected, primefactor->of(7));
}
TEST_F(PrimeFixture, Of8) {
	expected = { 2,2,2 };
	EXPECT_EQ(expected, primefactor->of(8));
}