
/* the official documintation*/
/*
*   @file       Functions
*   @version 1.0.0 small change will be 1.0.1 normal change 1.1.0 full change 2.0.0
*   @brief      solving the functions questions
*   @details    it is 12 questions from here https://www.w3resource.com/c-programming-exercises/function/index.php
*   @author     Yousef Khaled Omar
*/

/*========================================================================
*   ProjetAct           :
*   Platform            :   CodeBlocks
*   Peripheral          :
*   SW version          :
========================================================================*/

/* ******************** Includes Section Start ************************ */
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

//#include <stdlib.h>
/* ******************** Includes Section End ************************** */

/* ******************** Defintion Section Start *********************** */
//#define X 3
/* ******************** Defintiion Section End ************************ */

/* ******************** Global Variable Section Start ****************** */
//const N=3;
/* ******************** Global Variable Section End ******************** */

/* ******************** Global Defintion Section Start ***************** */

/* ******************** Global Defintion Section End ******************* */

/* ******************** Sub-program Decleration Section Start ********** */
float sum(float,float);
float square(float);
void swap(float*,float*);
bool isodd(int);
int fact(int);
float series(int);
int dec2bin(int ,int );
bool isprime(int);
void readarr(int *,int);
void printarr(int *,int);
int maxarr(int *,int);
bool isarmstrong(int);
bool isperfect(int);
void perfectarr(int low,int high);
void sortstring(char *);
void printsarr(char *);
bool isanagram(char *,char *);
void minarr(int *,int);
/* ******************** Sub-program Decleration Section End ************ */

int main()
{   float num1,num2,total,squar,SumSeries,binary;
    bool OddTest,PrimeTest,ArmstrongTest,PerfectTest,AnagramTest;
    int arr[100],n,maxind;
    printf("Enter the first number\n");
    scanf("%f",&num1);
    printf("Enter the second number\n");
    scanf("%f",&num2);
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    readarr(arr,n);
    total=sum(num1,num2);
    printf("The total is: %0.2f\n",total);
    squar=square(num1);
    printf("The square of %0.2f is : %0.2f\n",num1,squar);
    printf("Before swapping: num1 = %0.2f, num2 = %0.2f\n",num1,num2);
    swap(&num1,&num2);
    printf("After swapping: num1 = %0.2f, num2 = %0.2f\n",num1,num2);
    OddTest=isodd(num1);
    if(OddTest)
        printf("The number %0.2f is odd\n",num1);
    else
        printf("The number %0.2f is even\n",num1);
    SumSeries=series(num1);
    printf("The Sum of series n!/n n=%0.0f is %0.2f\n",num1,SumSeries);
    binary=dec2bin(num1,0);
    printf("The binary of %0.0f is %0.0f\n",num1,binary);
    PrimeTest=isprime(num1);
    if(PrimeTest)
        printf("The number %0.2f is prime\n",num1);
    else
        printf("The number %0.2f is not prime\n",num1);
    printarr(arr,n);
    maxind=maxarr(arr,n);
    printf("The largest element in the array is : %d which is the %d element\n",arr[maxind],maxind+1);
    ArmstrongTest=isarmstrong(num1);
    if(ArmstrongTest)
        printf("The number %0.2f is an Armstrong number\n",num1);
    else
        printf("The number %0.2f is not an Armstrong number\n",num1);
    PerfectTest=isperfect(num1);
    if(PerfectTest)
        printf("The number %0.2f is a Perfect number\n",num1);
    else
        printf("The number %0.2f is not a Perfect number\n",num1);
    printf("The numbers must be positive\n");
    int low,high;
    printf("Enter the lowest number\n");
    scanf("%d",&low);
    printf("Enter the highest number\n");
    scanf("%d",&high);
    perfectarr(low,high);
    printf("Enter the character First array\n");
    char sarr1[100],sarr2[100];
    scanf("%99s",sarr1);
    printf("Enter the character Second array\n");
    scanf("%99s",sarr2);
    AnagramTest=isanagram(sarr1,sarr2);
    if(AnagramTest)
        printf("%s and %s are Anagram\n",sarr1,sarr2);
    else
        printf("%s and %s are not Anagram\n",sarr1,sarr2);
    minarr(arr,n);
    return 0;
}

/* ******************** Sub-program Section Start ********************* */
float sum(float n1,float n2){
    return n1+n2;
}

float square(float n){
    return n*n;
}

void swap(float* n1,float* n2){
    float temp=*n1;
    *n1=*n2;
    *n2=temp;
}

bool isodd(int n){
if(n%2==0)return 0;
return 0;
}

int fact(int n){
    if (n<0)
        printf("Invalid input!\n(there is no negative factorial)\n");
    if(n<=1)
        return 1;
    int sum=1;
    for(register unsigned int i=2;i<=n;i++)
        sum*=i;
    return sum;
}

float series(int n){
    float sum=0;
    for(register unsigned int i=1;i<=n;i++)
        sum+=(float)fact(i)/(float)i;
    return sum;
}

int dec2bin(int n,int total){
    if(n<2)
        return n%2;
    total=dec2bin(n/2,total);
    total*=10;
    total+=n%2;
    return total;
}

bool isprime(int n){
    if(n<=1)
        return 0;
    if(n==2)
        return 1;
    for(register unsigned int i=2;i<n;i++)
        if(n%i==0)//not prime
        return 0;
    return 1;//if the loop finishes it is prime
}

void readarr(int *arr,int n){
    for(register unsigned int i=0;i<n;i++)
        scanf("%d",&arr[i]);
}

void printarr(int *arr,int n){
    printf("The array:\n");
    for(register unsigned int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}

int maxarr(int *arr,int n){
    int max=arr[0],index=0;
    for(register unsigned int i=0;i<n;i++)
        if(arr[i]>max){
                index=i;
                max=arr[i];
        }
    return index;
}

bool isarmstrong(int n){
    unsigned int ndigit=0;//number of digits
    int temp=n,sum=0;
    while(temp>0){
        ndigit++;
        temp/=10;
    }
    temp=n;//restart
    for(register unsigned int i=0;i<ndigit;i++){//now we are gonna calculate the sum
        sum+=pow(temp%10,ndigit);
        temp/=10;
    }
    if(sum==n)
        return 1;
    else
        return 0;
}

bool isperfect(int n){
    unsigned int sum=0;
    for(register unsigned int i=1;i<=n-1;i++)
        if(n%i==0)
            sum+=i;
    if(sum==n)
        return 1;
    else
        return 0;
}

void perfectarr(int low,int high){
    if(low<0||high<0){
        printf("Invalid Input\n");
        return;
    }
    printf("The perfect numbers between %d to %d are :\n",low,high);
    for(register unsigned int i=low;i<=high;i++){
        if(isperfect(i))
            printf("%d ",i);
    }
    printf("\n");
}

void sortstring(char *arr){
    int maxind,len=strlen(arr),temp;
    for(register unsigned int i=0;i<len;i++){
        maxind=i;
        for(register unsigned int j=i;j<len;j++)
            if(arr[maxind]<arr[j])
                maxind=j;
        temp=arr[i];
        arr[i]=arr[maxind];
        arr[maxind]=temp;
    }
}

void printsarr(char *arr){
    for(register unsigned int i=0;arr[i]!='\0';i++)
        printf("%c",arr[i]);
    printf("\n");
}

bool isanagram(char *arr1,char *arr2){
    unsigned int len1=strlen(arr1);
    unsigned int len2=strlen(arr2);
    if(len1!=len2)
        return 0;
    char sarr1[100],sarr2[100];
    strcpy(sarr1,arr1);
    strcpy(sarr2,arr2);
    sortstring(sarr1);
    sortstring(sarr2);
    for(register unsigned int i=0;i<len1;i++)
        if(sarr1[i]!=sarr2[i])
            return 0;
    return 1;
}

void minarr(int *arr,int n){
    unsigned int maxind=0,minind=0;
    for(register unsigned int i=0;i<n;i++){
        if(arr[i]>arr[maxind])
                maxind=i;
        if(arr[i]<arr[minind])
                minind=i;
        }
    printf("Minimum value is : %d which is index = %d\n",arr[minind],minind+1);
    printf("Maximum value is : %d which is index = %d\n",arr[maxind],maxind+1);

}
/* ******************** Sub-program  Section End ********************** */

/*

**************************************************************************
User            Date            Task    Details
**************************************************************************
Yousef          28jul2023       1       Finished the first 6
Yousef          29jul2023       2       Finished all of them


*/
