
#include <stdio.h>

int main(int argc, char **argv) {

  int n = 0;
  printf("Enter any number:");
  scanf("%d",&n);

  /*Calculate Factorial */

  int count =1;
  int fact =1;
  while (count<=n) {
    fact = fact*count;
    count++;
  }

  printf("n factorial = %d \n",fact);
  
return 0;

  }
