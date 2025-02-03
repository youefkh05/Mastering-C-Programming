#include <stdio.h>
#include "function_pointers.h"

// Function prototypes
void add(int a, int b);
void subtract(int a, int b);
void multiply(int a, int b);
void divide(int a, int b);

// Function pointer array
void (*operation[])(int, int) = {add, subtract, multiply, divide};

// Function to perform addition
void add(int a, int b) {
    printf("Result: %d\n", a + b);
}

// Function to perform subtraction
void subtract(int a, int b) {
    printf("Result: %d\n", a - b);
}

// Function to perform multiplication
void multiply(int a, int b) {
    printf("Result: %d\n", a * b);
}

// Function to perform division
void divide(int a, int b) {
    if (b != 0) {
        printf("Result: %.2f\n", (float)a / b);
    } else {
        printf("Error: Division by zero!\n");
    }
}

// Function to execute an operation based on user choice
void execute_operation(int choice, int a, int b) {
    if (choice >= 0 && choice < sizeof(operation) / sizeof(operation[0])) {
        operation[choice](a, b);
    } else {
        printf("Invalid operation choice!\n");
    }
}