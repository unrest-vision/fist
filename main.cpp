#include <iostream>

// Function to calculate the area of a parallelogram
double calculateParallelogramArea(double base, double height) {
    return base * height;
}

int main() {
    double base, height;

    // Get the base and height from the user
    std::cout << "Enter the base length of the parallelogram: ";
    std::cin >> base;

    std::cout << "Enter the height of the parallelogram: ";
    std::cin >> height;

    // Calculate and display the area of the parallelogram
    double parallelogramArea = calculateParallelogramArea(base, height);

    std::cout << "Area of the parallelogram: " << parallelogramArea << std::endl;

    return 0;
}
