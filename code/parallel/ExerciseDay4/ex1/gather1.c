#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LUMP 1
static long int numSteps = 1000000000;

int main(int argc, char **argv) {
  
  int numP, procID;
  

  // the usual mpi initialization
  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &numP);
  MPI_Comm_rank(MPI_COMM_WORLD, &procID);

  double *globalData=NULL;
  double localData[LUMP];

  // process 0 is only 1 that needs global data
  if (procID == 0) {
    globalData = (double*) malloc(LUMP * numP * sizeof(double) );
    for (int i=0; i<LUMP*numP; i++)
      globalData[i] = 0;
  }
  
double  myPart = 0;
double dx = 1./numSteps;
double x = dx*0.5;
  
  for (int i=procID; i<numSteps; i+=numP) {
	  x = (i+0.5)*dx;
    myPart += 4./(1.+x*x);
  }
  
  myPart *= dx;
  MPI_Gather(&myPart, LUMP, MPI_DOUBLE, globalData, LUMP, MPI_DOUBLE, 0, MPI_COMM_WORLD);

double pi = 0;
  if (procID == 0) {
    for (int i=0; i<numP; i++)
		pi += globalData[i];
      printf("%f /n ", pi);
     
  }

  if (procID == 0)
    free(globalData);

  MPI_Finalize();
}