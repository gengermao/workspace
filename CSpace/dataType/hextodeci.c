#include <stdio.h>

int htoi(char s[]);

main()
{
	char hex[7] = {'0','x','3','d','f','e','a'};
	int result = 0;

	result = htoi(hex);
	printf("The result of array of hextodeci is %d\n",result);
}

int htoi(char s[])
{
	int i, n;
	n = 0;
	
	for(i = 0; i < 7; ++i)
	{
		printf("s[%d] is %c\n",i,s[i]);
	}

	if('0' == s[0] && ('x' == s[1] || 'X' == s[1]))
	{	
		
		for(i = 2; i < 7; ++i)
		{
			
			if(s[i] >= '0' && s[i] <= '9')
				n = 16 * n + s[i] - '0';
			else if(s[i] >= 'a' && s[i] <= 'f')
				n = 16 * n + s[i] - 'a' + 10;
			else if(s[i] >= 'A' && s[i] <= 'F')
				n = 16 * n + s[i] - 'A' + 10;
			
			/*
			if(s[i] >= '0' && s[i] <= '9')
				n = 16 * (s[i] - '0') + n;
			else if(s[i] >= 'a' && s[i] <= 'f')
				n = 16 * (s[i] - 'a' + 10) + n;
			else if(s[i] >= 'A' && s[i] <= 'F')
				n = 16 * (s[i] - 'A' + 10) + n;
			*/
			else
			{	
				printf("the hex has illegal character\n");
				return 0;
			}
		}
		return n;
	}
	else		
		printf("the hex has illegal character\n");

}

