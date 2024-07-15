#include <iostream>
#include <string>

class Student {
public:
    // Member variables
    std::string name;
    int roll_no;
};

int main() {
    // Create an object of the 'Student' class and assign values
    Student student;
    student.name = "John";
    student.roll_no = 2;

    // Print the values
    std::cout << "Student Name: " << student.name << std::endl;
    std::cout << "Roll Number: " << student.roll_no << std::endl;

}