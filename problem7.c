#include <stdio.h>

int main (){


int a,b,c,d;


printf("Enter the number of days:\n");

scanf("%d", &a);

b = (a / 365);
c = (a - (b*365))/7;
d = (a - (365*b) - (c*7));


printf("Years: %d\n Weeks: %d\n Days: %d\n", b,c,d);
return 0;
}
