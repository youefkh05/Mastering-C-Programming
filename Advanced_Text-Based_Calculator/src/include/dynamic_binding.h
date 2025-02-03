#ifndef DYNAMIC_BINDING_H
#define DYNAMIC_BINDING_H

// Function prototypes for dynamic binding of arithmetic operations
typedef double (*ArithmeticOperation)(double, double);

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

ArithmeticOperation getOperation(char operator);

#endif // DYNAMIC_BINDING_H