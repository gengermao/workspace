#include <stdio.h>
#include <string.h>

void squeeze(char s1[], char s2[]);
void findstring(char s1[], char s2[]);

int main()
{
	char s1[16] = {'c','a','s','s','a','n','d','r','a','n','d','s','q','l','b','\0'};
	char s2[4] = {'a','n','d','\0'};
	squeeze(s1,s2);

	printf("%d\n", strlen(s1));
	printf("%d\n", strlen(s2));
	printf("%s\n", s1);
	printf("%s\n", s2);

	return 0;
}

void squeeze(char s1[],char s2[])
{
	int i, j, k;

	for(i = k = 0; s1[i] != '\0'; ++i)
	{
		for(j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)
			;
		if(s2[j] == '\0')
			s1[k++] = s1[i];
	}
	
	s1[k] = '\0';
}

void findstring(char s1[], char s2[])
{
	int i, j, k;
	int lens1, lens2;

	lens1 = strlen(s1);
	lens2 = strlen(s2);

	for(i = j = 0; (i < lens1) && (j < lens2);)
	{
		if(s1[i++] == s2[j++])
		{
			if(j == lens2)
			{
				printf("开始位置%d,结束位置%d\n", i-lens2+1,i);
				j = 0;
			}
		}
		else
		{
			i = i - j + 1;
			j = 0;
			continue;
		}		 
	}
}