#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

class Shape {
public:
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double rad) : radius(rad) {}

    double calculateArea() const override {
        return PI * radius * radius;
    }

    double calculatePerimeter() const override {
        return 2 * PI * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double len, double wid) : length(len), width(wid) {}

    double calculateArea() const override {
        return length * width;
    }

    double calculatePerimeter() const override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double calculatePerimeter() const override {
        return side1 + side2 + side3;
    }

    double calculateArea() const override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
};

int main() {
    double cr, rl, rw, ts1, ts2, ts3;
    cout << "Enter the radius of the circle: ";
    cin >> cr;
    cout << "Enter the length and width of the rectangle: ";
    cin >> rl >> rw;
    cout << "Enter the sides of the triangle: ";
    cin >> ts1 >> ts2 >> ts3;
    Circle cir(cr);
    Rectangle rect(rl, rw);
    Triangle tri(ts1, ts2, ts3);
    cout << "\nRESULTS:\n";
    cout << "Circle\n";
    cout << "Area: " << cir.calculateArea() << endl;
    cout << "Perimeter: " << cir.calculatePerimeter() << endl;
    cout << "\nRectangle\n";
    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Perimeter: " << rect.calculatePerimeter() << endl;
    cout << "\nTriangle\n";
    cout << "Area: " << tri.calculateArea() << endl;
    cout << "Perimeter: " << tri.calculatePerimeter() << endl;

    return 0;
}
