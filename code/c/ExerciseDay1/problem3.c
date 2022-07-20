// program to solve quadratic equation
//        ax^2 + bx + c = 0
//
// soln: x = -b/2a +/- sqrt(b^2-4ac)/2a
//
// write a program to take 3 inputs and output the soln
// deal with possible errors in input, i.e. b^2-4ac negative

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

static int long numSteps = 100000;
int main(int argc, char **argv) {
  clock_t begin = clock();
  double pi= 0 ;
  double dx = 1/(double)numSteps ; //step size
  double fy ;
  double x = 0;
  // your code
  for (int i=0; i < numSteps; i++) {   
        fy = (4 / (1 + x* x));
	pi += fy*dx;
	x += dx;
  }
  clock_t end = clock();
  double time = (double) (end-begin)/CLOCKS_PER_SEC * 1000;
  printf("PI = %f,duration:%f ms\n",pi,time);
  return 0;
}

