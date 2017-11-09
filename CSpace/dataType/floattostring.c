#include <stdio.h>
#include <string.h>

#define PRECISION 4

char * floattostr(float val, int precision, char *buf);

int main()
{
	char buf[32];

	printf("%s\n",floattostr((float)5, PRECISION, buf));
	printf("%s\n",floattostr((float)5.1, PRECISION, buf));
	printf("%s\n",floattostr((float)5.12, PRECISION, buf));
	printf("%s\n",floattostr((float)5.123, PRECISION, buf));
	printf("%s\n",floattostr((float)5.1234, PRECISION, buf));
	printf("%s\n",floattostr((float)5.12345678, PRECISION, buf));
}

char * floattostr(float val, int precision, char *buf)
{
	char *cur, *end;

	sprintf(buf, "%.6f", val);
	if(precision < 6)
	{
		cur = buf + strlen(buf) - 1;
		end = cur - 6 + precision;
		while((cur > end) && (*cur == '0'))
		{
			*cur = '\0';
			cur --;
		}
	}
	return buf; 
}
