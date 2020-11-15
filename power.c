#include "myMath.h"

#define e 2.71828182845904524

double power (double x , int y){
double answer = 1;
if(y<0){ //if y negative
x = 1/x;
y = y*-1;
 }
for(int i=0; i<y; i++){
answer = answer*x;
}
return answer;
}

double Exponent(int x){
return power(e , x);
}

