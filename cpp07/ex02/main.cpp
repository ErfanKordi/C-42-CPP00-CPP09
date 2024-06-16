#include <iostream>
#include "Array.tpp"

int main() {
    // Create an array of integers with size 5
    Array<int> arr(5);

    // Fill array with values
    for (unsigned int i = 0; i < arr.size(); ++i) {
        arr[i] = i * 10;
    }

    // Access and print array elements
    for (unsigned int i = 0; i < arr.size(); ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    // Test copy constructor
    Array<int> arr2 = arr;
    std::cout << "arr2 size: " << arr2.size() << std::endl;
    for (unsigned int i = 0; i < arr2.size(); ++i) {
        std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;
    }

    // Test assignment operator
    Array<int> arr3;
    arr3 = arr;
    std::cout << "arr3 size: " << arr3.size() << std::endl;
    for (unsigned int i = 0; i < arr3.size(); ++i) {
        std::cout << "arr3[" << i << "] = " << arr3[i] << std::endl;
    }

    // Test out of bounds exception handling
    try {
        std::cout << "Trying to access arr[10]: ";
        std::cout << arr[10] << std::endl; // Should throw exception
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
