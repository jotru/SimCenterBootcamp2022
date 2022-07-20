#include <stdio.h>
#include <stdlib.h>
#include "stresstransform.h"


int main(int argc, char **argv) {

	double sigx = 12.0;
	double sigy = -5.5;
	double tau  =  3.5;

	double sigxp;
	double sigyp;
	double taup;
	
	STRESS s = {sigx,sigy,tau}; 
	STRESS sp;
	StressTransform(s,&sp,0);
	printf("sigx' = %12.6f\nsigy' = %12.6f\ntau'  = %12.6f\n\n", sp.sigx,sp.sigy, sp.tau);

	StressTransform(s,&sp, 25.0);
	printf("sigx' = %12.6f\nsigy' = %12.6f\ntau'  = %12.6f\n\n", sp.sigx, sp.sigy, sp.tau);
}


