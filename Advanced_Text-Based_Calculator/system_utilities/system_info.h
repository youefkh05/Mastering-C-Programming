/**
 * @file system_info.h
 * @version	:	1.0.0 small change will be 1.0.1, normal change 1.1.0, full change 2.0.0
 * @brief	:	Provides functions for printing system information.
 * @details	:	This file contains functions to print various system information including CPU architecture,
 *				endianness, pointer size, and data type sizes.
 * @author	:	Yousef Khaled Omar
 * @user	:	Youefkh05	
 */

 /*========================================================================
 *   Project             : System Information Printer
 *   Platform            : Any
 *   Peripheral          : N/A
 *   SW version          : 1.0.0
 ========================================================================*/

/*
 * Created	:	9/7/2024 3:18 PM
 *  Author	:	youefkh05
 * MISRA-C	:2012 guidelines adherence:
 * - Rule 1.1	:	All code should be in a function (no code at file scope).
 * - Rule 8.9	:	No implicit conversion between signed and unsigned types.
 * - Rule 10.1	:	Avoid magic numbers by using defined constants.
 * - Rule 21.1	:	Functions should not rely on undefined behavior.
 */


#ifndef _SYSTEM_INFO_H
#define  _SYSTEM_INFO_H
/* ******************** Includes Section Start ************************ */
#include <stdio.h>
#include "Std_types.h"
/* ******************** Includes Section End ************************** */

/* ******************** Definition Section Start *********************** */
#define OS_NAME			("Microsoft Windows [Version 10.0.19045.4780]")
#define COMPILE_NAME	("gcc (GCC) 12.2.0")
/* ******************** Definition Section End ************************ */

/* ******************** Sub-program Declaration Section Start ********** */
 /**
   * @brief  This function prints the CPU_TYPE.
   * - Rule 1.1
   */
void printCPUArchitecture(void);

/**
 * @brief  This function prints the endianness of the system.
 * - Rule 1.1
 */
void printEndianness(void);

/**
 * @brief Prints information about the operating system .
 * - Rule 1.1
 */
void printOperatingSystem(void);

/**
 * @brief Prints compiler information .
 * - Rule 1.1
 */
void printCompilerInfo(void);

/**
 * @brief Prints sizes of signed integer types.
 * - Rule 1.1
 */
void printSignedInfo(void);

/**
 * @brief Prints sizes of integer types.
 * - Rule 1.1
 */
void printUnsignedInfo(void);

/**
 * @brief Prints limits of floating-point types.
 * - Rule 1.1
 */
void printFloatLInfo(void);

/**
 * @brief Prints boolean type information.
 * - Rule 1.1
 */
void printBooleanInfo(void);

/**
 * @brief Prints all system information.
 * - Rule 1.1
 */
void printSystemInfo(void);

/* ******************** Sub-program Declaration Section End ************ */


#endif // !_SYSTEM_INFO_H


/*

**************************************************************************
User				 Date			Task	Details
**************************************************************************
Youefkh05			09/07/2024       0      Added MISRA-C:2012 compliance documentation
Youefkh05			09/07/2024       1      Added Functions declerations 

*/