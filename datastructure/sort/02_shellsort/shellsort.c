#include <stdio.h>

void shellsort(int v[], int n);
void shellsort1(int v[], int n);
void shellsort2(int v[], int n);

void main()
{
	int v[23] = {263,4,3,352,28,2,55,20,100,87,348,32,211,1,34,12,23,22,19,102,8,90,49};
	int i;

	shellsort(v,23);
	
	for(i = 0; i < 23; ++i)
		printf("a[%d]=%d ",i, v[i]);

	printf("\n");
}

void shellsort1(int v[], int n)
{
	int i, j, gap;
	//最内层循环只对当前组进行希尔排序
	for(gap = n/2; gap > 0; gap/=2)
		for(i = 0; i < gap; ++i)
		{
			for(j = i + gap; j < n; j += gap)
			{
				if(a[j] < a[j-gap])
				{
					int temp = a[j];
					int k = j - gap;
					while(k >= 0 && a[k] > temp)
					{
						a[k+gap] = a[k];
						k -= gap;
					}
					a[k+gap] = a[k];
				}
			}
		}
}

void shellsort2(int v[], int n)
{
	int i, gap;
	
	//第二层循环时每组依次都在进行希尔排序
	for(gap = n/2; gap > 0; gap /= 2)
		for(i = gap; i < n; j++)
			if(a[i] < a[i-gap])
			{
				int temp = a[i];
				int j = i - gap;
				while(j >= 0 && a[j] > temp)
				{
					a[j+gap] = a[j];
					j -= gap;
				}
				a[j+gap] = temp;
			}
		
}

void shellsort(int v[], int n)
{
	int gap, i, j, temp;

	for(gap = n/2; gap > 0; gap /= 2)
	{
		for(i = gap; i < n; i++ )
		{
			for(j = i - gap; j >= 0 && (v[j] > v[j+gap]) ; j -= gap)
			{
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
		}
	}
}
