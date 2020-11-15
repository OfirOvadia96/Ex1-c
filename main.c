#include <stdio.h>
#include "myMath.h"

int main() {
double number = 0;
printf("pleas insert a real number: ");
scanf("%lf", &number);
int y = (int)(number); //Because the Exponent gets an integer

//f(x) = e^x+x^3-2
printf("The value of f(x) = e^x+x^3-2 at the point %0.4lf is: \n",  sub(add(Exponent(y) , power(number,3)) , 2));

//f(x) = 3x+2x^2
printf("The value of f(x) = 3x+2x^2 at the point %0.4lf is: \n", add(mul(number , 3) ,mul(power(number , 2) , 2)));

//f(x) = (4x^3)/5-2x
printf("The value of f(x) = (4x^3)/5-2xat the point %0.4lf is: \n", sub(div((mul(power(number , 3) , 4)) , 5), mul(number , 2)));

return 0;
}
