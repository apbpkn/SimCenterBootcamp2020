#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "myVector.h"

int main(int argc, char **argv) {

  if (argc !=3) {
    fprintf(stderr,"Enter 3 arguments \n");
    return -1;
}
  int n = atoi(argv[1]);
  double maxVal = atof(argv[2]);

  double *data1 = createMyVector(n);
  double *data2 = createMyVector(n);
  double *data3 = createMyVector(n);

  srand(100);
  for (int i=0;i<n;i++) {
    data1[i] = ((float)rand()/(float)RAND_MAX)* maxVal;
    data2[i] = ((float)rand()/(float)RAND_MAX)* maxVal;
  }

  printMyVector(data1,n,"Vector 1");
  printMyVector(data2,n,"Vector 2");


  //dotSum the Vectors and print result:

  dotSumMyVector(data1,data2,data3,n);
  printMyVector(data3,n,"dotSum");
  return 0;

}


