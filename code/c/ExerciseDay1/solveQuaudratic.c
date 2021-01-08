#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if (argc != 4) {
    printf("Usage: appName a b c\n");
    exit(-1);
  }

  float a = atof(argv[1]);
  float b = atof(argv[2]);
  float c = atof(argv[3]);

  if (a==0) {
	float x1 = -c/b;
	printf(" Solution is %f \n",x1);
    }

  else if ((b*b-4*a*c)>=0) {

   float x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
   float x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
   printf(" Solution is %f and %f !\n",x1,x2);
   
}

 else {

   printf("Complex Roots \n");
 }

  printf("Have a Nice Day!\n");
  return 0;
}
