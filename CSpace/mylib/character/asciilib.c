#include <stdio.h>
#include "asciilib.h"

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}

int lower(int c)
{
	return (c > 'A' && c < 'Z') ? c + 'a' - 'A' : c;
}

int upper(int c)
{
	return (c > 'a' && c < 'z') ? c - 'a' + 'A' : c;
}