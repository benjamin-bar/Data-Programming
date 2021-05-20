#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){


int a,b,c, x = atoi(argv[1]);


	a = (x/3600);
	b = (x-(3600*a))/60;
	c = (x-(3600*a)-(b*60));

printf("%d:%d:%d\n", a,b,c);

return 0;
}
