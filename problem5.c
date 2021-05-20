#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){

float a,b,c;


printf("Enter your height and weight:\n");

scanf("%f %f", &a, &b);

c = (b/pow(a,2)); // I personally prefere this than (a * a) because the former is more precise


if (c < 18.5){
printf("%.1f Underweight\n", c);
}
else if ( c >= 18.5 && c < 25){

printf("%.1f Normal\n", c);
}

else if (c>=25 && c < 30){

printf("%.1f Overweight\n",c);}

else if ( c>30) {

printf("%.1f Obese\n", c);
}

return 0;
}
