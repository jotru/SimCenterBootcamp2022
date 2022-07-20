#include <stdio.h>
#include <stdlib.h>
#include <math.h>    // need this for the constant pi = M_PI

#include "stresstransform.h"


int main(int argc, char **argv) {

	// get dth from the first argument.  This is given in degrees!
        double theta;
        if (argc=1) {
	  theta = atof(argv[1]);
        }
        else {
	  printf("You need to give the theta input \n");
	  return -1;
	}
	// might be smart to set a default value, just in case the user
	// forgets when calling this  program;)


	// set the initial stress state

	STRESS S0;
	STRESS Sp;

	S0.sigx = 12.0;
	S0.sigy = -5.5;
	S0.tau  =  3.5;
	for (float i=0;i<=180;i=i+theta){
	// loop to compute transformed states

	  StressTransform(S0, &Sp, i);
	  printf("sigx' = %12.6f\nsigy' = %12.6f\ntau'  = %12.6f\n\n", Sp.sigx, Sp.sigy, Sp.tau);
	}
}

