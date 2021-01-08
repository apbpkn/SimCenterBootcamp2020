#include <stdio.h>
#include <stdlib.h>
#include <math.h>    // need this for the constant pi = M_PI

#include "stresstransform.h"


int main(int argc, char **argv) {

	// get dth from the first argument.  This is given in degrees!
	...
	// might be smart to set a default value, just in case the user
	// forgets when calling this  program;)

	double d = atof(argv[1]);
	// set the initial stress state
    
	STRESS S0;
	STRESS Sp;

	int nSteps = 10;
	S0.sigx = 12.0;
	S0.sigy = -5.5;
	S0.tau  =  3.5;
	double dTheta = (180.-d)/nSteps;

	// loop to compute transformed states
	for (i=0;i<nSteps;i++) {
		d+=dTheta;
	StressTransform(S0, &Sp, d);
	printf("sigx' = %12.6f, sigy' = %12.6f, tau'  = %12.6f\n", Sp.sigx, Sp.sigy, Sp.tau);
}
 
}