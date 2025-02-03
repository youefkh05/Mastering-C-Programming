#include "recursion.h"

/**
 * @brief Calculates the factorial of a given number recursively.
 * 
 * @param n The number to calculate the factorial of.
 * @return The factorial of the number n.
 */
int factorial(int n) {
    if (n < 0) {
        return -1; // Error case for negative numbers
    }
    if (n == 0 || n == 1) {
        return 1; // Base case
    }
    return n * factorial(n - 1); // Recursive case
}