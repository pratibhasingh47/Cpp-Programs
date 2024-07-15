#include <iostream>
#include <string>

class Student {
public:
    // Member variables
    std::string name;
    int roll_no;
    std::string phone_number;
    std::string address;
};

int main() {
    // Create two objects of the 'Student' class and assign values
    Student sam;
    sam.name = "Sam";
    sam.roll_no = 1;  // Assigning roll no. to Sam 
    sam.phone_number = "123-456-7890";
    sam.address = "123 Main St, City, Country";

    Student john;
    john.name = "John";
    john.roll_no = 2;  // Assign roll number for John
    john.phone_number = "987-654-3210";
    john.address = "456 Elm St, Another City, Another Country";

    // Print the information for Sam
    std::cout << "Student Name: " << sam.name << std::endl;
    std::cout << "Roll Number: " << sam.roll_no << std::endl;
    std::cout << "Phone Number: " << sam.phone_number << std::endl;
    std::cout << "Address: " << sam.address << std::endl;

    // Print the information for John 
    std::cout << "\nStudent Name: " << john.name << std::endl;
    std::cout << "Roll Number: " << john.roll_no << std::endl;
    std::cout << "Phone Number: " << john.phone_number << std::endl;
    std::cout << "Address: " << john.address << std::endl;

    return 0;
}