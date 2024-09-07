/*
 * Std_types.h
 *
 * Created	:	9/7/2024 12:22 PM
 *  Author	:	youefkh05
 *  @user	:	Youefkh05	
 *  MISRA-C	:	2012 guidelines adherence:
 * - Rule 1.1	:	No code at file scope
 * - Rule 8.9	:	No implicit conversion between signed and unsigned types.
 * - Rule 10.1	:	Avoid magic numbers by using defined constants.
 * - Rule 21.1	:	Functions should not rely on undefined behavior.
 */


#ifndef _STD_TYPES_H
#define  _STD_TYPES_H

 /* CPU type definitions */
#define CPU_TYPE_8	(8)		/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */
#define CPU_TYPE_16	(16)	/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */
#define CPU_TYPE_32	(32)	/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */
#define CPU_TYPE_64	(64)	/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */

#define CPU_TYPE CPU_TYPE_64  /* Define the CPU type for the target platform */

/* Type definitions based on CPU type */
#if (CPU_TYPE_8==CPU_TYPE)
	/* Unsigned integer types */
	typedef unsigned char			boolean;	/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef unsigned char			uint8;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef unsigned long int		uint16;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef unsigned long long int	uint32;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	
	/* Signed integer types */
	typedef signed char				sint8;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef signed long int			sint16;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef signed long long int	sint32;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	
	/* Floating point types */
	typedef float	float32;	/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef double	float64;	/* MISRA-C:2012 Rule 1.1 - No code at file scope */

#elif (CPU_TYPE_16==CPU_TYPE)
	/* Unsigned integer types */
	typedef unsigned char			boolean;	/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef unsigned char			uint8;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef unsigned short int		uint16;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef unsigned long int		uint32;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef unsigned long long int	uint64;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	
	/* Signed integer types */
	typedef signed char				sint8;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef signed short int		sint16;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef signed int				sint32;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef signed long long int	sint64;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	
	/* Floating point types */
	typedef float	float32;					/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef double	float64;					/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	
#elif (CPU_TYPE_32==CPU_TYPE)
	/* Unsigned integer types */
	typedef unsigned char			boolean;	/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef unsigned char			uint8;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef unsigned short int		uint16;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef unsigned long int		uint32;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef unsigned long long int	uint64;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	
	/* Signed integer types */
	typedef signed char				sint8;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef signed short int		sint16;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef signed int				sint32;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef signed long long int	sint64;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	
	/* Floating point types */
	typedef float	float32;	/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef double	float64;	/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	
	
#elif (CPU_TYPE_64==CPU_TYPE)
	/* Unsigned integer types */
	typedef unsigned char			boolean;	/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef unsigned char			uint8;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef unsigned short int		uint16;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef unsigned int			uint32;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef unsigned long long int	uint64;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	
	/* Signed integer types */
	typedef signed char				sint8;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef signed short int		sint16;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef signed int				sint32;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef signed long long int	sint64;		/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	
	/* Floating point types */
	typedef float	float32;	/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	typedef double	float64;	/* MISRA-C:2012 Rule 1.1 - No code at file scope */
	//typedef long double float128;
	
#endif // (CPU_TYPE)

// Boolean values
#define	TRUE	1	/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */
#define	FALSE	0	/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */

/*Unsigned integer Max Values*/
#define UINT8MAX  (255u)					/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */
#define UINT16MAX (65535u)					/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */
#define UINT32MAX (4294967295u)				/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */
#define UINT64MAX (18446744073709551615ULL)	/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */

/*Signed integer Max Values*/
#define SINT8MAX  (127)						/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */
#define SINT16MAX (32767)					/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */
#define SINT32MAX (2147483647)				/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */
#define SINT64MAX (9223372036854775807LL)	/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */

/* Floating point Max Values */
#define FLT32_MAX		(3.402823466e+38F)			/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */
#define FLT64_MAX		(1.7976931348623157e+308)	/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */
#define FLT32_DIG		(6)							/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */
#define FLT32_MAX_EXP	(128)						/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */
#define FLT64_DIG		(15)						/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */
#define FLT64_MAX_EXP	(1024)						/* MISRA-C:2012 Rule 10.1 - Avoid magic numbers */


/*Unsigned integer Min Values*/
#define UINT8MIN  (0u)
#define UINT16MIN (0u)
#define UINT32MIN (0u)
#define UINT64MIN (0u)

/*Signed integer Min Values*/
#define SINT8MIN  (-128)
#define SINT16MIN (-32768)
#define SINT32MIN (SINT32MAX+1)
#define SINT64MIN (SINT64MAX+1)


/* Floating point Min Values */
#define FLT32_MIN		(1.175494351e-38F)
#define FLT64_MIN		(2.2250738585072014e-308)
#define FLT32_EPSILON	(1.192092896e-7F)
#define FLT32_MIN_EXP	(-125)
#define FLT64_EPSILON	(2.2204460492503131e-16)
#define FLT64_MIN_EXP	(-1021)

#endif // !_STD_TYPES_H

