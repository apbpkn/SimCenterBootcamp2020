#include <stdio.h>
#include <math.h>
static int long numSteps = 100000;

int main() {

  double pi = 0;
  double time = 0;
  double f = 0;
  double x = 0;

  for (int i=0;i<numSteps;i++) {
    x = x+ 1./numSteps;    
    f = 4/(1+(x*x));
    pi += f*1/numSteps;
    printf("x = %f, i = %d, pi = %f \n",x,i,pi);

  }

  printf("PI = %f ,duration = %f ms \n",pi,time);
  return 0;
}
