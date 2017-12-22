#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int max);
int strindex(char source[],char searchfor[]);

char pattern[] = "coulde";

main(){
	char line[MAXLINE];
	int found = 0;

	while(getline(line, MAXLINE) > 0)
	{
		if(strindex(line, pattern) >= 0)
		{
			printf("%s", line);
			found++;
		}
	}
	return found;
}

/*getline : get line into line, return length*/
int getline(char line[], int max)
{
	int c, i;

	for(i = 0; i < max - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
		line[i]	= c;
	if(c == '\n')
	{
		line[i++] = c;
	}
	s[i] = '\0';
	return i;
}

/*strindex: return index of t in s, -1 if none*/
int strindex(char s[], char t[])
{
	int i, j, k;

	for(i = 0; s[i] != '\0'; i++)
	{
		for(j = 0, k = j; t[j] != '\0' && t[j] == s[k]; j++, k++)
			;
		if(j > 0 && t[j] == '\0')
			return i;
	}

	return -1;

}

int strrindex(char s[], char t[])
{
	int i, j, k;
	int positioon = -1;

	for(i = 0; s[i] != '\0'; i++)
	{
		for(j = 0, k = j; t[j] != '\0' && t[j] == s[k]; j++, k++)
			;
		if(j > 0 && t[j] == '\0')
			position =  i;
	}
	
	return position;

}

int strindex_my(char s[], char t[])
{
	int i, j, k;
	int isSame = 1;

	for(i = 0; s[i] != '\0'; i++)
	{
		for(j = 0, k = i; t[j] != '\0' && s[k] != '\0';j++)
		{
			if(s[k] == t[j])
			{
				k++;
				continue;
			}
			isSame = 0;
			break;
		}
		if(isSame)
			return i;
	}

	return -1;
}

