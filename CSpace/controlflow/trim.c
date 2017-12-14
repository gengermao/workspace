#include <stdio.h>
#include <string.h>
#include <ctype.h>

int trim(char s[]);

int main()
{
}

int my_trim1(char s[])
{
	int i, len;
	len = strlen(s);
	for(i = len - 1; isspace(s[i]); i--)
		s[i] = '\0';

	return i;
}i

int my_trim2(char s[])
{
	int i, len;
	len = strlen(s);

	for(i = len -1; isspace(s[i]); i--)

	s[i+1] = '\0';
	return i;
}

int trim(char s[])
{
	int i, len;
	len = strlen(s);

	for(i = len; i >=0; i--)
		if(s[i] != ' '&& s[i] != '\t' && s[i] != '\n')
			break;
	s[i+1] = '\0';
	return i;
}
