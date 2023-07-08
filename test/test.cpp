
#include "gtest/gtest.h"
#include "../include/point.h"

TEST(PointTestSuite, Point2DConstructionTest) {
    Point2D<int> point{1, 2};
    bool is_equal = point.X() == 1 && point.Y() == 2;
    ASSERT_TRUE(is_equal);
}

TEST(PointTestSuite, Point3DConstructionTest) {
    Point3D<int> point{1, 2, 3};
    bool is_equal = point.X() == 1 && point.Y() == 2 && point.Z() == 3;
    ASSERT_TRUE(is_equal);
}

TEST(PointTestSuite, PointConstructionTest) {
    std::vector<int> coords;
    coords.push_back(1);
    coords.push_back(2);
    coords.push_back(3);
    Point<int> point(coords);
    bool is_equal = point[0] == 1 && point[1] == 2 && point[2] == 3;
    ASSERT_TRUE(is_equal);
}

