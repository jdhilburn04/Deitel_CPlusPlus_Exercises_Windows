#include <iostream>
#include <vector>
#include <stdexcept>

// Function to output the contents of a vector
void outputVector(const std::vector<int>& items) {
    for (const int& item : items) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}

// Function to input values into a vector
void inputVector(std::vector<int>& items) {
    std::cout << "Enter " << items.size() << " integers:" << std::endl;
    for (int& item : items) {
        std::cin >> item;
    }
}

int main() {
    // Create two vectors of integers with sizes 7 and 10
    std::vector<int> integers1(7);
    std::vector<int> integers2(10);

    // Display initial sizes and contents (default-initialized to 0)
    std::cout << "Size of vector integers1: " << integers1.size() << "\nVector after initialization: ";
    outputVector(integers1);

    std::cout << "Size of vector integers2: " << integers2.size() << "\nVector after initialization: ";
    outputVector(integers2);

    // Input values into both vectors
    inputVector(integers1);
    inputVector(integers2);

    // Display the vectors after input
    std::cout << "Contents of vector integers1 after input: ";
    outputVector(integers1);

    std::cout << "Contents of vector integers2 after input: ";
    outputVector(integers2);

    return 0;
}
