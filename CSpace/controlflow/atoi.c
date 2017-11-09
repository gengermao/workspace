#include <stdio.h>
#include <ctype.h>

int atoi(char s[]);

main()
{

}

int atoi(char s[])
{
	int i, n, sign;

	for(i = 0; isspace(s[i]); i++)
		;
	sign = (si == '-') ? -1 : 1;
	if(s[i] == '+' || s[i] == '-')
		i++;
	for(n = 0; isdigit(s[i]); i++)
	{
		n = 10 * n + (s[i] - '0');
	}

	return sign*n; 
	
}

int atoi2(char s[])
{
	int i, c ,sign;
}
