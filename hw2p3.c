/* Problem 3
 * Author: Kelsey Cole
 * Class: CS537, Numerical Analysis
 * Purpose: Implement Newton's iteration for f(x) = x^4+2x^3-7x^2-8x+12
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//main function
int main(){
float computed_value = 0; //initialize computed value
//root chosen is -3; interval chosen is [-4,-2]
//so x0 = 0 since f' and f'' have different signs
float x0 = -4;
float xn = x0;
float root = -3;
printf("My algorithm results: \n"); 
for(int k = 0; k < 20; k++){ //execute 20 times
printf("k = %d", k); //print k value
//calculate xn
//calculate f(x)
float fx = (xn * xn * xn * xn) + (2 * xn * xn * xn) - (7 * xn * xn) - (8 * xn) + 12;
//calculate f'(x)
float fp = (4 * xn * xn * xn) + (6 * xn * xn) - (14 * xn) - 8;
computed_value = xn - (fx/fp);
float empirical_error = fabs(fx/fp);
float true_error = fabs(computed_value - root);
printf(", computed value = %.10lf, empirical error = %.10lf, true error = %.10lf \n", computed_value, empirical_error, true_error); //print computed value
xn = computed_value;
}

return 0;
}
