// program to solve quadratic equation
//        ax^2 + bx + c = 0
//
// soln: x = -b/2a +/- sqrt(b^2-4ac)/2a
//
// write a program to take 3 inputs and output the soln
// deal with possible errors in input, i.e. b^2-4ac negative

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if (argc != 5) {
    printf("Usage: appName sx sy tau theta\n");
    exit(-1);
  }
      
  float sx = atof(argv[1]);
  float sy = atof(argv[2]);
  float tau = atof(argv[3]);
  float theta = atof(argv[4])*M_PI /180;

  double cost = cos(theta);
  double sint = sin(theta);

  double sxp = sx * cost*cost + sy * sint* sint + 2 * tau * sint * cost;
  double syp = sy * sint*sint + sy * cost * cost - 2 * tau * sint * cost;
  double taup = (sy - sx) * sint * cost + tau * (cost* cost - sint* sint);

  printf("Sigma_x' = %12.6f\n",sxp);
  printf("Sigma_y' = %12.6f\n",syp);
  printf("Tau_xy' = %12.6f\n",taup);

}

