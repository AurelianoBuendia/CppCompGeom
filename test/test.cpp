
#include "gtest/gtest.h"
#include "../include/point.h"

TEST(PointTestSuite, Point3DConstructionTest) {
    std::vector<int> coords;
    coords.push_back(1);
    coords.push_back(2);
    coords.push_back(3);
    Point<int> point(coords);
    bool is_equal = point[0] == 1 && point[1] == 2 && point[2] == 3;
    ASSERT_TRUE(is_equal);
}
