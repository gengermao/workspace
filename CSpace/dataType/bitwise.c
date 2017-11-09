#include <stdio.h>

unsigned getbits(unsigned x ,int p, int n);
unsigned setbits(unsigned x, int p, int n, unsigned y);
unsigned invert(unsigned x, int p, int n);
unsigned rightrot(unsigned x, int n);
int wordlength(void); 
int bitcount(unsigned x);
int bitcount1(unsigned x);

int main(int argc, char const *argv[])
{
	int x, p, n;

	x = 156;
	p = 4;
	n = 3;

	printf("%u",getbits(x, p, n));

	return 0;
}

unsigned rightrot(unsigned x, int n)
{
	unsigned rbits;

	if((n = n % wordlength()) > 0)
	{
		rbits = ~(~0 << n) & x;

		rbits = rbits << (wordlength() - n);
		x = x >> n;
		x = x | rbits;
	}

	/*int rbit;

	while(n-- > 0)
	{
		rbit = (x & 1) << (wordlength()-1);
		x = x >> 1;
		x = x | rbit;
	}*/
	return x;
}

unsigned invert(unsigned x, int p, int n)
{
	return x ^ (~(~0 >> n) >> (p - n + 1));
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	return x & ~(~(~0 >> n) << (p + 1 - n)) |
	    (y & ~(~0 << n)) << (p + 1 - n);
}

unsigned getbits(unsigned x ,int p, int n)
{
	return (x >> (p + 1 - n)) & ~(~0 << n);
}

int wordlength(void)
{
	int i;
	unsigned v = (unsigned)-0;

	for(i = 1; (v= v >> 1) > 0; i++)
		;
	return i; 

}

int bitcount(unsigned x)
{
	int b;

	for(b = 0; x != 0; x >>= 1)
	{
		if(x & 01)
			b++;
	}
	
	return b;
}

int bitcount1(unsigned x)
{
	int i;

	for(i = 0; x != 0; x &= x -1)
		++i;

	return i;
}