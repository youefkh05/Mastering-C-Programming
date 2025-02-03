/*========================================================================
*   Project             : Main
*   Platform            : Any
*   Peripheral          : N/A
*   SW version          : 1.0.0
========================================================================*/

/**
 * @file arithmetic.c
 * @version : 1.0.0
 * @brief   : Arithmetic functions for the Advanced Text-Based Calculator.
 * @details : This file contains functions to perform basic arithmetic
 * operations. The calculator supports addition, subtraction, multiplication,
 * and division.
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
 *           and type qualifiers
 * Rule 8.4: A function should be used in preference to a
 *           function-like macro
 * Rule 9.1: All automatic variables shall have been
 *           assigned a value before being used
 * Rule 21.1: Standard library headers should
 *            be included only if required
 */

/* ******************** Includes Section Start ************************ */
#include "include/arithmetic.h" // Rule 21.1

/* ******************** Includes Section End ************************** */

/* ******************** Sub-program Section Start ********************* */
int add(int a, int b) { return a + b; }      // Rule 8.3
int subtract(int a, int b) { return a - b; } // Rule 8.3
int multiply(int a, int b) { return a * b; } // Rule 8.3
int divide(int a, int b) { return a / b; }   // Rule 8.3
/* ******************** Sub-program Section End ********************** */

/*

**************************************************************************
User            Date            Task    Details
**************************************************************************
Youefkh05       02/03/2025       0      Added MISRA-C:2012 complianced
                                        documentation


*/