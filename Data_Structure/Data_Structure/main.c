
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
#include "system_utilities/Std_types.h"
#include "Stack/Stack_ds.h"
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

void swap_two_num(int* n1, int* n2);
void bbl_sort(int* arr, int num);
void ins_sort(int* arr, int num);
void slc_sort(int* arr, int num);

int main() {
	//int arr1[10] = { 9,8,1,5,6,7,8,2,3,5 };
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("Before:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");

	slc_sort(arr1,10 );
	printf("After:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	//printSystemInfo();
	return 0;
}

/* ******************** Sub-program Section Start ********************* */
// Functions definitions go here
/* ******************** Sub-program Section End ********************** */

/*

**************************************************************************
User            Date            Task    Details
**************************************************************************
Youefkh05          09/07/2024       0      Added MISRA-C:2012 compliance documentation

*/

void swap_two_num(int* n1, int* n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void bbl_sort(int* arr, int num) {
	char swp_flg = 0;
	for (int i = num - 1; i >0 ; i--) {
		swp_flg = 0;
		for(int j = 0; j < i;j++ ) {
			if (arr[j] < arr[j + 1]) {
				swap_two_num(&arr[j], &arr[j + 1]);
				swp_flg = 1;
			}
		}
		if (0== swp_flg) {
			return;
		}
	}
}

void ins_sort(int* arr, int num) {
	int j = 0;
	for (int i = 1; i < num; i++) {
		j = i;
		while (arr[j] < arr[j - 1] && 0!=j) {
			swap_two_num(&arr[j], &arr[j - 1]);
			j--;
		}
	}
}

void slc_sort(int* arr, int num) {
	int i = 0,min_idx = 0;
	for (int i = 0; i < num; i++) {
		min_idx = i;

		for (int j = i; j < num; j++) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}

		if (i != min_idx) {
			swap_two_num(&arr[i], &arr[min_idx]);
		}
	}
}