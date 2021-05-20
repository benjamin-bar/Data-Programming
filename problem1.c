#include<stdio.h>


int main (){

int a,b,c,d;

printf("\nEnter your number of seconds:\n");
scanf("%d", &a);

b = (a/3600);
c = (a-(3600*b))/60;
d = (a-(3600*b)-(c*60));
printf("\n%d:%d:%d\n\n", b,c,d);
return 0;
}

