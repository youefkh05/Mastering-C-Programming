/**
 * @file system_info.c
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
 /* ******************** Includes Section Start ************************ */
#include "system_info.h"
/* ******************** Includes Section End ************************** */

/* ******************** Definition Section Start *********************** */
/*	Each Type SIze	*/
static void printSignedSize(void);
static void printUnsignedSize(void);

/*	Each Type Max	*/
static void printSignedMax(void);
static void printUnsignedMax(void);


/*	Each Type Min	*/
static void printSignedMin(void);
static void printUnsignedMin(void);

/* ******************** Sub-program Declaration Section End ************ */

/* ******************** Sub-program Section Start ********************* */
/**
 * @brief  This function prints the CPU_TYPE.
 * - Rule 1.1
*/
void printCPUArchitecture(void) {
	/*MISRA-C:2012 guideline:
	* - Rule 10.1
	* - Rule 21.1
	*/
	printf("CPU TYPE: %u-bit\n", CPU_TYPE);
}

/**
 * @brief  This function prints the endianness of the system.
 * - Rule 1.1
 */
void printEndianness(void) {
	/*MISRA-C:2012 guideline:
	* - Rule 21.1
	*/
	uint16_t num = 0x1;
	uint8_t* byte = (uint8_t*)&num;
	if (*byte) {
		printf("Endianness: Little-endian\n");
	}
	else {
		printf("Endianness: Big-endian\n");
	}
}

/**
 * @brief Prints information about the operating system .
 * - Rule 1.1
 */
void printOperatingSystem(void) {
	/* MISRA-C:2012 guideline:
	 * - Rule 21.1
	 */
	printf("Operating System	: %s\n", OS_NAME);
}

/**
 * @brief Prints compiler information .
 * - Rule 1.1
 */
void printCompilerInfo(void) {
	/* MISRA-C:2012 guideline:
	 * - Rule 21.1: Functions should not rely on undefined behavior.
	 */
	printf("Compiler Info	: %s\n", COMPILE_NAME);
}

/**
 * @brief Prints sizes of signed integer types.
 * - Rule 1.1
 */
void printSignedInfo(void) {
	printSignedSize();
	printSignedMax();
	printSignedMin();
}

/**
 * @brief Prints sizes of integer types.
 * - Rule 1.1
 */
void printUnsignedInfo(void) {
	printUnsignedSize();
	printUnsignedMax();
	printUnsignedMin();
}

/**
 * @brief Prints limits of floating-point types.
 * - Rule 1.1
 */
void printFloatLInfo(void) {
	printf("Size of float32_t	:	%zu bytes\n",	sizeof(float32_t));
	printf("FLOAT32_MAX		:	%e\n",				FLT32_MAX);
	printf("FLOAT32_MIN		:	%e\n",				FLT32_MIN);
	printf("FLOAT32_EPSILON		:	%e\n",			FLT32_EPSILON);
	printf("FLOAT32_DIG		:	%iu\n",				FLT32_DIG);
	printf("FLT32_MAX_EXP		:	%iu\n",			FLT32_MAX_EXP);
	printf("Size of float64_t	:	%zu bytes\n",	sizeof(float64_t));
	printf("FLOAT64_MAX		:	%e\n",				FLT64_MAX);
	printf("FLOAT64_MIN		:	%e\n",				FLT64_MIN);
	printf("FLOAT64_EPSILON		:	%e\n",			FLT64_EPSILON);
	printf("FLOAT64_DIG		:	%iu\n",				FLT64_DIG);
	printf("FLT64_MAX_EXP		:	%iu\n",			FLT64_MAX_EXP);
}

/**
 * @brief Prints boolean type information.
 * - Rule 1.1
 */
void printBooleanInfo(void) {
	printf("Size of Boolean		:	%zu bytes\n", sizeof(boolean));
	printf("TRUE			:	%i\n",TRUE);
	printf("FALSE			:	%i\n", FALSE);
}

/**
 * @brief Prints all system information.
 * - Rule 1.1
 */
void printSystemInfo(void) {
	printf("\nCPU:\n");
	printCPUArchitecture();

	printf("\nEndian:\n");
	printEndianness();

	printf("\nOS:\n");
	printOperatingSystem();

	printf("\nCompiler:\n");
	printCompilerInfo();

	printf("\nSigned:\n");
	printSignedInfo();

	printf("\nUnsigned:\n");
	printUnsignedInfo();

	printf("\nFloat:\n");
	printFloatLInfo();

	printf("\nBool:\n");
	printBooleanInfo();
}

/**
 * @brief Prints signed int type size.
 * - Rule 10.1
 */
static void printSignedSize(void) {
	printf("Size of sint8_t		: %zu bytes\n", sizeof(sint8_t));
	printf("Size of sint16_t	: %zu bytes\n", sizeof(sint16_t));
	printf("Size of sint32_t	: %zu bytes\n", sizeof(sint32_t));
	printf("Size of sint64_t	: %zu bytes\n", sizeof(sint64_t));
}

/**
 * @brief Prints unsigned int type size.
 * - Rule 10.1
 */
static void printUnsignedSize(void) {
	printf("Size of uint8_t		: %zu bytes\n", sizeof(uint8_t));
	printf("Size of uint16_t	: %zu bytes\n", sizeof(uint16_t));
	printf("Size of uint32_t	: %zu bytes\n", sizeof(uint32_t));
	printf("Size of uint64_t	: %zu bytes\n", sizeof(uint64_t));
}

/**
 * @brief Prints signed int type max.
 * - Rule 10.1
 */
static void printSignedMax(void) {
	printf("sint8_t	 MAX		: %i\n",	SINT8MAX);
	printf("sint16_t MAX		: %i\n",	SINT16MAX);
	printf("sint32_t MAX		: %ld\n",	SINT32MAX);
	printf("sint64_t MAX		: %lld\n",	SINT64MAX);
}

/**
 * @brief Prints unsigned int type max.
 * - Rule 10.1
 */
static void printUnsignedMax(void) {
	printf("uint8_t	 MAX		: %i\n",	UINT8MAX);
	printf("uint16_t MAX		: %i\n",	UINT16MAX);
	printf("uint32_t MAX		: %lu\n",	UINT32MAX);
	printf("uint64_t MAX		: %llu\n",	UINT64MAX);
}


/**
 * @brief Prints signed int type min.
 * - Rule 10.1
 */
static void printSignedMin(void) {
	printf("sint8_t	 MIN		: %i\n",	SINT8MIN);
	printf("sint16_t MIN		: %i\n",	SINT16MIN);
	printf("sint32_t MIN		: %ld\n",	SINT32MIN);
	printf("sint64_t MIN		: %lld\n",	SINT64MIN);
}

/**
 * @brief Prints unsigned int type min.
 * - Rule 10.1
 */
static void printUnsignedMin(void) {
	printf("uint8_t	 MIN		: %i\n",	UINT8MIN);
	printf("uint16_t MIN		: %i\n",	UINT16MIN);
	printf("uint32_t MIN		: %lu\n",	UINT32MIN);
	printf("uint64_t MIN		: %llu\n",	UINT64MIN);
}


  /* ******************** Sub-program Section End ********************** */

  /*

  **************************************************************************
  User				 Date			Task	Details
  **************************************************************************
  Youefkh05			09/07/2024       0      Added Documentation
  Youefkh05			09/07/2024       1      Added Functions Implementation


  */