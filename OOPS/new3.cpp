#include <iostream>
#include <cmath>

class Triangle
{
public:
    double side1;
    double side2;
    double side3;

    // Constructor to initialize the sides of the triangle
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // Function to calculate and print the perimeter of the triangle
    void printPerimeter()
    {
        double perimeter = side1 + side2 + side3;
        std::cout << "Perimeter of the triangle: " << perimeter << " units" << std::endl;
    }

    // Function to calculate and print the area of the triangle using Heron's Formula
    void printArea()
    {
        double s = (side1 + side2 + side3) / 2;
        double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
        std::cout << "Area of the triangle: " << area << " square units" << std::endl;
    }
};

int main()
{
    // Create a Triangle object with sides 3, 4, and 5 units
    Triangle triangle(3, 4, 5);

    // Calculate and print the perimeter and area of the triangle
    triangle.printPerimeter();
    triangle.printArea();
    return 0;
}