#include <stdio.h>
#include <math.h>

int main (){

int a, b, c, x, y;


printf("\nType the three values and the value of x:\n");

scanf("%d %d %d %d", &a, &b, &c, &x);

y = (a *(pow(x,2)) + (b * x) + (c));

printf("\n%d\n\n", y);

return 0;
}
