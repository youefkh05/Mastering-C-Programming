#include "include/dynamic_binding.h" // Rule 21.1
#include <stdio.h>

// Function pointers for arithmetic operations
typedef double (*ArithmeticOperation)(double, double);

// Function prototypes for arithmetic operations
double addf(double a, double b);
double subtractf(double a, double b);
double multiplyf(double a, double b);
double dividef(double a, double b);

// Array of function pointers for dynamic binding
ArithmeticOperation operations[] = {addf, subtractf, multiplyf, dividef};

// Function to perform an operation based on the user's choice
double performOperation(int choice, double a, double b) {
  if (choice < 0 || choice >= sizeof(operations) / sizeof(operations[0])) {
    printf("Invalid operation choice.\n");
    return 0;
  }
  return operations[choice](a, b);
}

// Implementation of basic arithmetic operations
double addf(double a, double b) { return a + b; }

double subtractf(double a, double b) { return a - b; }

double multiplyf(double a, double b) { return a * b; }

double dividef(double a, double b) {
  if (b != 0) {
    return a / b;
  } else {
    printf("Error: Division by zero.\n");
    return 0;
  }
}