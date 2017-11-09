#include <stdio.h>

void stract(char s[],char t[]);

main()
{
	int i;
	char s[128] = {'s','t','a','d','d','a','r','d','\0'};
	char t[8] = {'l','i','b','r','a','r','y','\0'};

	stract(s,t);

	printf("%s\n",s);

}

void stract(char s[],char t[])
{
	int i, j;
	
	for(i = j = 0; t[j] != '\0'; ++i)
	{
		if('\0' == s[i])
			s[i] = t[j++];
	}
	s[i+1] = '\0';

}
