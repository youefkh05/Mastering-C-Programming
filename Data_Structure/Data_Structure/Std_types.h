/*
 * Std_types.h
 *
 * Created: 9/7/2024 12:22 PM
 *  Author: youefkh05
 */

#ifndef _STD_TYPES_H
#define  _STD_TYPES_H

//Cpu types
#define CPU_TYPE_8	(8)
#define CPU_TYPE_16	(16)
#define CPU_TYPE_32	(32)
#define CPU_TYPE_64	(64)

#define CPU_TYPE CPU_TYPE_64

#if (CPU_TYPE_8==CPU_TYPE)
//Unsigned
typedef unsigned char boolean;
typedef unsigned char uint8;
typedef unsigned long int uint16;
typedef unsigned long long int uint32;

//Signed
typedef signed char sint8;
typedef signed long int sint16;
typedef signed long long int sint32;

//float
typedef float float32;
typedef double float64;

#elif (CPU_TYPE_16==CPU_TYPE)
//Unsigned
typedef unsigned char boolean;
typedef unsigned char uint8;
typedef unsigned short int uint16;
typedef unsigned long int uint32;
typedef unsigned long long int uint64;

//Signed
typedef signed char sint8;
typedef signed short int sint16;
typedef signed int sint32;
typedef signed long long int sint64;

//float
typedef float float32;
typedef double float64;

#elif (CPU_TYPE_32==CPU_TYPE)
//Unsigned
typedef unsigned char boolean;
typedef unsigned char uint8;
typedef unsigned short int uint16;
typedef unsigned long int uint32;
typedef unsigned long long int uint64;

//Signed
typedef signed char sint8;
typedef signed short int sint16;
typedef signed int sint32;
typedef signed long long int sint64;

//float
typedef float float32;
typedef double float64;


#elif (CPU_TYPE_64==CPU_TYPE)
//Unsigned
typedef unsigned char boolean;
typedef unsigned char uint8;
typedef unsigned short int uint16;
typedef unsigned int uint32;
typedef unsigned long long int uint64;

//Signed
typedef signed char sint8;
typedef signed short int sint16;
typedef signed int sint32;
typedef signed long long int sint64;

//float
typedef float float32;
typedef double float64;
//typedef long double float128;

#endif // (CPU_TYPE)

//boolean
#define		TRUE	1
#define		FALSE	0

//max
//unsigned
#define UINT8MAX  (255u)
#define UINT16MAX (65535u)
#define UINT32MAX (4294967295u)
#define UINT64MAX (18446744073709551615ULL)

//signed
#define SINT8MAX  (127)
#define SINT16MAX (32767)
#define SINT32MAX (2147483647)
#define SINT64MAX (9223372036854775807LL)

//float
#define FLT32_MAX		(3.402823466e+38F)
#define FLT64_MAX		(1.7976931348623157e+308)
#define FLT32_DIG		(6)
#define FLT32_MAX_EXP	(128)
#define FLT64_DIG		(15)
#define FLT64_MAX_EXP	(1024)


//min
//unsigned
#define UINT8MIN  (0u)
#define UINT16MIN (0u)
#define UINT32MIN (0u)
#define UINT64MIN (0u)

//signed
#define SINT8MIN  (-128)
#define SINT16MIN (-32768)
#define SINT32MIN (SINT32MAX+1)
#define SINT64MIN (SINT64MAX+1)


//float
#define FLT32_MIN		(1.175494351e-38F)
#define FLT64_MIN		(2.2250738585072014e-308)
#define FLT32_EPSILON	(1.192092896e-7F)
#define FLT32_MIN_EXP	(-125)
#define FLT64_EPSILON	(2.2204460492503131e-16)
#define FLT64_MIN_EXP	(-1021)

#endif // !_STD_TYPES_H

