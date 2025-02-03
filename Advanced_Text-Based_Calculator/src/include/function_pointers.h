#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

// Function pointer type for arithmetic operations
typedef double (*ArithmeticOperation)(double, double);

// Function pointer type for bitwise operations
typedef int (*BitwiseOperation)(int, int);

// Function prototypes for dynamic operation handling
void performArithmeticOperation(ArithmeticOperation op, double a, double b);
void performBitwiseOperation(BitwiseOperation op, int a, int b);

#endif // FUNCTION_POINTERS_H