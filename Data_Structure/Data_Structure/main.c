
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
#include "system_utilities/system_info.h"
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

	printSystemInfo();
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