#include <iostream>

template <typename T, int size>
class ArrayContainer {
private:
    T elements[size];

public:
    // Constructor
    ArrayContainer() {}

    // Function to set elements
    void setElement(int index, const T& value) {
        if (index >= 0 && index < size) {
            elements[index] = value;
        } else {
            std::cerr << "Index out of bounds!" << std::endl;
        }
    }

    // Function to get elements
    T getElement(int index) const {
        if (index >= 0 && index < size) {
            return elements[index];
        } else {
            std::cerr << "Index out of bounds!" << std::endl;
            return T();
        }
    }
};

int main() {
    ArrayContainer<int, 5> intArray;

    for (int i = 0; i < 5; ++i) {
        intArray.setElement(i, i * 10);
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << "Element at index " << i << ": " << intArray.getElement(i) << std::endl;
    }

    return 0;
}
