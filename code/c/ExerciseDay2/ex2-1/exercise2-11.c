#include <stdio.h>
#include <stdlib.h>

#include "stresstransform.h"


int main(int argc, char **argv) {

  struct {
  double sigx = 12.0;
  double sigy = -5.5;
  double tau  =  3.5;
  } stress;

  double sigxp;
  double sigyp;
  double taup;

  StressTransform(sigx, sigy, tau, &sigxp, &sigyp, &taup, 0.0);
  printf("SIGx' = %12.6f\nsigy' = %12.6f\ntau'  = %12.6f\n\n", sigxp, sigyp, taup);

  StressTransform(sigx, sigy, tau, &sigxp, &sigyp, &taup, 25.0);
  printf("SIGY' = %12.6f\nsigy' = %12.6f\ntau'  = %12.6f\n\n", sigxp, sigyp, taup);
}





