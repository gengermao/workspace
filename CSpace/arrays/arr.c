#include <stdio.h>

void printfNew(char *s);

int main()
{
	char *p;
	*p =  "hello,world!";

	printf("p中存放的值是:%p\n",p);
	printf("p的地址是:%p\n",&p);
	printf("p中存放的地址所存放的值是:%s\n",p);
	printfNew(p);
	return 0;
}

void printfNew(char *s)
{
	printf("s中存放的值是:%p\n",s);
	printf("s的地址是:%p\n",&s);
	printf("%s\n", s);
}