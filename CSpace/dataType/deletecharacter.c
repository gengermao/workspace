#include <stdio.h>

void squeeze(char s[],int c);

main()
{
	int i;
	char s[11] = {'c','b','c','a','s','s','a','n','d','r','\0'};
	printf("%s\n\n",s);	
	squeeze(s,'c');	

	for(i = 0; s[i] != '\0';i++)
		printf("s[%d] = %c\n",i,s[i]);
}

void squeeze(char s[],int c)
{
	int i,j;
	for(i = 0; s[i] != '\0'; ++i)
	{
		if(c == s[i])
		{
			for(j = i; s[j] != '\0'; ++j)
			{
				s[j] = s[j+1];
				printf("%s\n",s);
			}
			/*	
			for(j = 0; s[j] != '\0'; ++j)
			{
				printf("s[%d] = %c\t",j,s[j]);
			}
			printf("\n");*/
		}	
	}
}

//=================After improvement=================

void squeeze1(char s[],int c)
{
	int i,j;
	for(i = j = 0; s[i] != '\0'; ++i)
	{
		if(c != s[i])
		{
			s[j++] = s[i];
		}
	}
	s[j] = '\0';
}
