#include <stdio.h>
#define TARGET 8

int binsearch(int x, int v[] ,int n);

main()
{
	int a[10] = {1,3,5,7,9,11,13,15,17,19};
	int postion;

	postion = -1;

	postion = binsearch(TARGET,a,10);
	if(postion > -1)
		printf("The target is the %d-th.\n",postion);
	else
		printf("THe target is not in the array");
}

int binsearch(int x, int v[], int n)
{
	int low, high, middle;

	low = 0;
	high = n - 1;
	
	while(low <=  high)
	{
		middle = (low + high) / 2;
		
		if(x < a[middle])
		{
			high = middle - 1;
		}
		else if(x > a[middle])
		{
			low = middle + 1;
		}
		else
		{
			return middle;
		}
	}
	return -1;
}

