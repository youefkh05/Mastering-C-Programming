
 /*========================================================================
 *   Project             : Main
 *   Platform            : Any
 *   Peripheral          : N/A
 *   SW version          : 1.0.0
 ========================================================================*/

 /*
  * Created	:	9/7/2024 12:22 PM
  *  Author	:	youefkh05
  *  @user	:	Youefkh05	
  *  MISRA-C:	2012 guidelines adherence:
  * - Rule 1.1	:	All code should be in a function (no code at file scope).
  * - Rule 8.9	:	No implicit conversion between signed and unsigned types.
  * - Rule 10.1	:	Avoid magic numbers by using defined constants.
  * - Rule 21.1	:	Functions should not rely on undefined behavior.
  */
  /* ******************** Includes Section Start ************************ */
#include <stdio.h>
#include "Std_types.h"
/* ******************** Includes Section End ************************** */

/* ******************** Definition Section Start *********************** */
//#define OS_Name ("Microsoft Windows [Version 10.0.19045.4780]")
/* ******************** Definition Section End ************************ */

/* ******************** Global Variable Section Start ****************** */
// const int N = 3;
/* ******************** Global Variable Section End ******************** */

/* ******************** Global Definition Section Start **************** */

/* ******************** Global Definition Section End ******************* */

/* ******************** Sub-program Declaration Section Start ********** */

/* ******************** Sub-program Declaration Section End ************ */


int main() {
	printf("%i\n",sizeof(uint8));
	printf("%i\n", sizeof(uint16));
	printf("%i\n", sizeof(uint32));
	printf("%i\n", sizeof(uint64));
	printf("%i\n", sizeof(sint8));
	printf("%i\n", sizeof(sint16));
	printf("%i\n", sizeof(sint32));
	printf("%i\n", sizeof(sint64));
	printf("%i\n", sizeof(float32));
	printf("%i\n", sizeof(float64));
	uint8  ui8 = UINT8MIN;
	uint16 ui16 = UINT16MIN;
	uint32 ui32 = UINT32MIN;
	uint64 ui64 = UINT64MIN;
	printf("UMin\n");
	printf("%i\n", ui8);
	printf("%i\n", ui16);
	printf("%lu\n", ui32);
	printf("%llu\n", ui64);
	ui8 = UINT8MAX;
	ui16 = UINT16MAX;
	ui32 = UINT32MAX;
	ui64 = UINT64MAX;
	printf("UMax\n");
	printf("%i\n", ui8);
	printf("%i\n", ui16);
	printf("%lu\n", ui32);
	printf("%llu\n", ui64);
	
	sint8  si8 = SINT8MIN;
	sint16 si16 = SINT16MIN;
	sint32 si32 = SINT32MIN;
	sint64 si64 = SINT64MIN;
	
	printf("SMin\n");
	printf("%i\n", si8);
	printf("%i\n", si16);
	printf("%ld\n", si32);
	printf("%lld\n", si64);
	
	si8 = SINT8MAX;
	si16 = SINT16MAX;
	si32 = SINT32MAX;
	si64 = SINT64MAX;
	printf("SMax\n");
	printf("%i\n", si8);
	printf("%i\n", si16);
	printf("%ld\n", si32);
	printf("%lld\n", si64);

	float32 f32 = FLT32_MIN;
	float64 f64 = FLT64_MIN;
	printf("FMin\n");
	printf("%e\n", f32);
	printf("%e\n", f64);

	f32 = FLT32_MAX;
	f64 = FLT64_MAX;
	printf("FMax\n");
	printf("%e\n", f32);
	printf("%e\n", f64);
	
	

	return 0;
}

/* ******************** Sub-program Section Start ********************* */
// Functions definitions go here
/* ******************** Sub-program Section End ********************** */

/*

**************************************************************************
User            Date            Task    Details
**************************************************************************
Yousef          09/07/2024       0      Added MISRA-C:2012 compliance documentation

*/