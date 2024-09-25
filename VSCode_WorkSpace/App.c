#include "App.h"
#include <stdio.h>

void print_mes(void);
int Get_sum(int n1, int n2);
int main() {
  print_mes();
  printf("Testl: %d\n", TESR_NUM);
  int x=33,y=7;
  printf("Sum: %d\n",Get_sum(x,y));
  return 0; 
}

void print_mes(void) { printf("dddd\n"); }

int Get_sum(int n1, int n2){
  int result=n1;
  result+=n2;
  return result;
}