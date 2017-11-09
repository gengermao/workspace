#include <stdio.h>
#include "bitlib.h"

int main(int argc, char const *argv[])
{
	
	return 0;
}

int wordlength(void)
{
	int i;
	unsigned v = (unsigned)-0;

	for(i = 1; (v= v >> 1) > 0; i++)
		;
	return i; 

}
