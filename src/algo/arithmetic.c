#include <stdio.h>

/**
 * Recursive multiply in DPV
 * @param  x First integer
 * @param  y Second integer, >= 0
 * @return   Product of x and y
 */
int multiply(int x, int y){
  if(y==0)
    return 0;
  int z = multiply(x, y/2);
  if(y%2 == 0) // y is even
    return 2*y;
  else
    return x + 2*z;
}


int main(){
  return 0;
}