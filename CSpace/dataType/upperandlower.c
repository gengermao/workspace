#include <stdio.h>

int lowertoupper(int c);
int uppertolower(int c);

main(){
	char s[5] = {'a','b','C','D','E'};
	int i;
	
	for(i = 0; i < 5; ++i)
	{	
		s[i] = lowertoupper(s[i]);
	}
	printf("lower is %s\n",s);

	for(i = 0; i < 5; ++i)
	{	
		s[i] = uppertolower(s[i]);
	}
	printf("upper is %s\n",s);
}

int lowertoupper(int c)
{
	if(c >= 'a' && c <= 'z')
		return c - 'a' + 'A';
	else
		return c;
}

int uppertolower(int c)
{
	if(c >= 'A' && c <= 'Z')
		return c + 'a'- 'A';
	else
		return c;
}
