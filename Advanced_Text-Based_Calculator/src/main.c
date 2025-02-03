/*========================================================================
*   Project             : Main
*   Platform            : Any
*   Peripheral          : N/A
*   SW version          : 1.0.0
========================================================================*/

/**
 * @file advanced_calculator.c
 * @version : 1.0.0
 * @brief   : Advanced Text-Based Calculator with Arithmetic, Bitwise,
 *            and Recursive Functions.
 * @details : This file contains functions to perform basic
 *            arithmetic, bitwise operations, recursive calculations
 * (factorial), function pointers, and dynamic memory handling. The calculator
 * supports dynamic binding for operations and maintains a calculation history.
 * @author  : Yousef Khaled Omar
 * @user    : Youefkh05
 */

/*
 * Created  : 2/3/2025 12:16 PM
 * Author   : youefkh05
 * @user    : Youefkh05
 * MISRA-C: 2012 guidelines adherence:
 * Rule 8.2: Function prototypes should be declared before use
 * Rule 8.3: All declarations of an object or function shall use the same names
 * and type qualifiers Rule 8.4: A function should be used in preference to a
 * function-like macro Rule 9.1: All automatic variables shall have been
 * assigned a value before being used Rule 15.0: All switch statements shall be
 * well-formed Rule 15.5: A function should have a single point of exit at the
 * end Rule 17.2: Functions should not call themselves, directly or indirectly
 * Rule 21.1: Standard library headers should be included only if required
 * Rule 21.6: The standard input/output library functions should not be used
 */

/* ******************** Includes Section Start ************************ */
#include "include/arithmetic.h"                 // Rule 21.1
#include "include/bitwise.h"                    // Rule 21.1
#include "include/calculator.h"                 // Rule 21.1
#include "include/dynamic_binding.h"            // Rule 21.1
#include "include/function_pointers.h"          // Rule 21.1
#include "include/recursion.h"                  // Rule 21.1
#include "include/system_utilities/Std_types.h" // Rule 21.1
#include <stdio.h>                              // Rule 21.1
#include <stdlib.h>                             // Rule 21.1
#include <string.h>

/* ******************** Includes Section End ************************** */

/* ******************** Definition Section Start *********************** */
// #define OS_Name ("Microsoft Windows [Version 10.0.19045.4780]")
/* ******************** Definition Section End ************************ */

/* ******************** Global Variable Section Start ****************** */
// const int N = 3;
/* ******************** Global Variable Section End ******************** */

/* ******************** Global Definition Section Start **************** */

/* ******************** Global Definition Section End ******************* */

/* ******************** Sub-program Declaration Section Start ********** */
int factorial(int n); /* Recursive function */ // Rule 17.2
void performOperation(int (*operation)(int, int), int a, int b);
/* Function pointer */ // Rule 8.2

/* ******************** Sub-program Declaration Section End ************ */

int main() { // Rule 8.4
  // int arr1[10] = { 9,8,1,5,6,7,8,2,3,5 };
  int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  printf("Before:\n");
  printf("%i", subtract(10, 5));
  return 0;
}

/* ******************** Sub-program Section Start ********************* */
// Functions definitions go here
/* ******************** Sub-program Section End ********************** */

/*

**************************************************************************
User            Date            Task    Details
**************************************************************************
Youefkh05       02/03/2025       0      Added MISRA-C:2012 complianced
                                        documentation


*/