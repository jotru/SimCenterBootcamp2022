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

  if (argc != 4) {
    printf("Usage: appName a b c\n");
    exit(-1);
  }
      
  float a = atof(argv[1]);
  float b = atof(argv[2]);
  float c = atof(argv[3]);
 
  float d = b*b-4*a*c;

  if (d < 0 ){
    double r_1 = sqrt(-d)/(2*a);
    double r_2 = -b/(2*a);
    printf("The Complex solution is %f  + %fi and %f - %f\n",r_2,r_1,r_2,r_1);
    return -1;
  }
  else if (d==0){
    float solution_1 = -b/(2*a);
    printf("The solution is %f \n",solution_1);
    return 0;
  }
  else {
    double r = sqrt(d);
    printf("r is %f\n",r);
    float solution_1 = (-b+r)/(2*a);
    float solution_2 = (-b-r)/(2*a);
    printf("the solutions are %f and %f \n",solution_1,solution_2);
    return 0;
  }
  printf("Have a Nice Day!\n");
  return 0;
}

