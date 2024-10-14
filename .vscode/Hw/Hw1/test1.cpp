#include <iostream>
#include <iomanip> // for std::setprecision
#include <cmath>   // for std::abs

// Function to evaluate f(x) = x^3 + C*x - 10
double f(double x, double C) {
    return x * x * x + C * x - 10;
}

int main() {
    double xl = -10.0; // Lower bound
    double xu = 10.0;  // Upper bound
    double C;

    // Read the value of C from the user
    std::cout << "Enter the value of C: ";
    std::cin >> C;

    // Check that C is greater than 0
    if (C <= 0) {
        std::cerr << "C must be greater than 0." << std::endl;
        return 1;
    }

    double xguess;
    int iterations = 0;

    // Perform the bisection method
    while (xu - xl > 1e-6) { // Continue until the interval is small enough
        xguess = (xl + xu) / 2.0; // Calculate the midpoint
        double fxl = f(xl, C);     // Function value at xl
        double fxguess = f(xguess, C); // Function value at the guess

        // Check which half of the interval contains the root
        if (fxguess == 0.0) {
            break; // We found the root
        } else if (fxl * fxguess < 0) {
            xu = xguess; // Root is between xl and xguess
        } else {
            xl = xguess; // Root is between xguess and xu
        }
        iterations++;
    }

    // Output the result with high precision
    std::cout << "Number of iterations: " << iterations << std::endl;
    std::cout << std::fixed << std::setprecision(10); // Set precision to 10 digits
    std::cout << "Found root x to be between " << xl << " and " << xu << std::endl;

    return 0;
}
