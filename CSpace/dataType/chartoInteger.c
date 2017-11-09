#include <stdio.h>

int atoi(char s[]);

void main()
{
	char s[5] = {'1','2','3','4','5'};
	int result;

	result = atoi(s);
	printf("result is %d\n",result);
}

int atoi(char s[])
{
	int i, n;
	
	n = 0;

	for(i = 0; i < 5; ++i)
	{
		if(s[i] > '0' && s[i] < '9')
			n = 10 * n + s[i] - '0';
		else
		{	
			printf("The array of char has illegal character");
			return -1;
		}
	}
	return n;
}
