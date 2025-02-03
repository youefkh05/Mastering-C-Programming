#include <stdio.h>
#include "include/calculator.h"
#include "include/arithmetic.h"
#include "include/bitwise.h"
#include "include/recursion.h"
#include "include/dynamic_binding.h"
#include "include/function_pointers.h"

void display_menu() {
    printf("Advanced Text-Based Calculator\n");
    printf("1. Arithmetic Operations\n");
    printf("2. Bitwise Operations\n");
    printf("3. Factorial (Recursive)\n");
    printf("4. Dynamic Binding Operations\n");
    printf("5. Function Pointer Operations\n");
    printf("0. Exit\n");
    printf("Choose an option: ");
}

int main() {
    int choice;
    
    do {
        display_menu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                perform_arithmetic_operations();
                break;
            case 2:
                perform_bitwise_operations();
                break;
            case 3:
                calculate_factorial();
                break;
            case 4:
                dynamic_binding_operations();
                break;
            case 5:
                function_pointer_operations();
                break;
            case 0:
                printf("Exiting the calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);
    
    return 0;
}