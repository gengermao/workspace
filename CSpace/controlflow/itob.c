#include <stdio.h>

#define abs(x) ((x) < 0 ? -(x) : (x))

void itoa(int n, char s[], int b)
{
	int i, sign;
	
	/* 当n = -2^(字长-1)，即负数的补码的最大值，它没有对应的正值
	if((sign = n) < 0)
		n = -n;
	*/
	i = 0;

	//do-while可以避免如果n=0，没有数值的问题，采用while结构会发生n=0，字符串数组中没有数据的问题。	
	do{
		j = abs(n % b);
		s[i++] = (j <= 9) ? j + '0': j + 'a' - 10;
	}while((n /= 10) != 0);

	if(sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}
