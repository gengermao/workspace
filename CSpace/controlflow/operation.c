#include <stdio.h>

void main()
{
	int a = -10;
	int b = 3;
	int c = -3;

	printf("%d/%d=%d\n",a,b,a/b);
	printf("%d/%d=%d\n",a,c,a/c);	
	printf("%d%%%d=%d\n",a,b,a%b);
	printf("%d%%%d=%d\n",a,c,a%c);
}
