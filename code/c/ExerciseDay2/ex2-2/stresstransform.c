#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "stresstransform.h"


// 
// check out the new function header:
// ... much more compact
// ... much easier to adapt to 3d states of stree (just change STRESS)
//

void StressTransform(STRESS stressIN, STRESS *stressOut, double theta) {

	double pi = 4.0*atan(1.);
	double th = theta * pi/180.;

	double sn = sin(th);
	double cs = cos(th);

	// these next lines need to be adapted to work with the new header ...

	
	stressOut->sigx = stressIN.sigx*cs*cs + stressIN.sigy*sn*sn + 2.*stressIN.tau*sn*cs;
	stressOut->sigy = stressIN.sigx*sn*sn + stressIN.sigy*cs*cs - 2.*stressIN.tau*sn*cs;
	stressOut->tau  = (stressIN.sigy - stressIN.sigx)*sn*cs + stressIN.tau*(cs*cs - sn*sn);

}