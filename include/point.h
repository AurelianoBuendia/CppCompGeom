
#ifndef POINT_H
#define POINT_H

#include <vector>

template<typename T>
class Point {
    public:
        Point(const std::vector<T>& coords) : coords(coords) {}

        Point(const Point& other) : coords(other.coords) {}

        Point& operator=(const Point& other) {
            coords = other.coords;
            return *this;
        }

        Point(Point&& other) : coords(std::move(other.coords)) {}

        Point& operator=(Point&& other) {
            coords = std::move(other.coords);
            return *this;
        }

        ~Point() {}

        T& operator[](int index) {
            return coords[index];
        }

        int Dimension() {
            return coords.size();
        }
        
    protected:
        std::vector<T> coords;
};

template<typename T>
class Point2D : Point<T> {
    public:
        Point2D(T x, T y) {
            std::vector<T> coords;
            coords.push_back(x);
            coords.push_back(y);
            Point<T>::Point(coords);
        }

        Point2D(const Point2D& other) {
            Point<T>Point(other.coords);
        }

        Point2D& operator=(const Point2D& other) {
            Point<T>::operator=(other);
            return *this;
        }

        Point2D(Point2D&& other) : Point<T>(std::move(other)) {}

        Point2D& operator=(Point2D&& other) {
            Point<T>::operator=(std::move(other));
            return *this;
        }

        ~Point2D() {}

        T X() {
            return this->coords[0];
        }

        T Y() {
            return this->coords[1];
        }
};

template<typename T>
class Point3D : Point<T> {
    public:
        Point3D(T x, T y, T z) {
            std::vector<T> coords;
            coords.push_back(x);
            coords.push_back(y);
            coords.push_back(z);
            Point<T>::Point(coords);
        }

        Point3D(const Point3D& other) {
            Point<T>Point(other.coords);
        }

        Point3D& operator=(const Point3D& other) {
            Point<T>::operator=(other);
            return *this;
        }

        Point3D(Point3D&& other) : Point<T>(std::move(other)) {}

        Point3D& operator=(Point3D&& other) {
            Point<T>::operator=(std::move(other));
            return *this;
        }

        ~Point3D() {}

        T X() {
            return this->coords[0];
        }

        T Y() {
            return this->coords[1];
        }

        T Z() {
            return this->coords[2];
        }

};

#endif
