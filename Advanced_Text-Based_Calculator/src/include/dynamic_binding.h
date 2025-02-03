#ifndef DYNAMIC_BINDING_H
#define DYNAMIC_BINDING_H

// Function prototypes for dynamic binding of arithmetic operations
//typedef double (*ArithmeticOperation)(double, double);

double addf(double a, double b);
double subtractf(double a, double b);
double multiplyf(double a, double b);
double dividef(double a, double b);

//ArithmeticOperation getOperation(char op);

#endif // DYNAMIC_BINDING_H