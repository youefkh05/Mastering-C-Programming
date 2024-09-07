/*
 * main.c
 *
 * Created: 9/7/2024 12:22 PM
 *  Author: youefkh05
 */
#include <stdio.h>
#include "Std_types.h"

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