#include <stdio.h>

void escape(char s[], char t[]);
void unescape(char s[], char t[]);

main()
{
	char s[1024], t[1024];
	int i;
	
	i = 0;

	while((c = getchar()) != EOF && i < 1023)
		s[i++] = c;

	s[i+1] = '\0';
	
	return;
}

void escape(char s[], char t[])
{
	int i, j;
	
	for(i = j = 0; s[i] != '\0'; i++)
	{
		switch(s[i])
		{
			case '\n':
				t[j++] = '\\';
				t[j++] = 'n';
				break;
			case '\t':
				t[j++] = '\\';
				t[j++] = 't';
				break;
			default:
				t[j++] = s[i];
				break;
		}
	}
	s[j] = '\0';
}

void unescape(char s[], char t[])
{
	int i, j;

	for(i = j = 0; s[i] != '\0'; i++)
	{
		switch(s[i])
		{
			case '\\':
				if('n' == s[++i])
					t[j++] = '\n';
				if('t' == s[++i])
					t[j++] = '\t';
				break;
			default:
				t[j++] = s[i];
				break;
		}
	}
}


