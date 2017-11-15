#include <stdio.h>

void insertsort1(int a[], int n);
void insertsort2(int a[], int n);
void insertsort(int a[], int n);

int main()
{

}

void insertsort1(int a[], int n)
{
	int i, j, k;

	for(i = 1 ;i < n; ++i)
	{
		//find the location of the insert for int[i]
		for(j = i - 1; j >=0; j--)
			if(a[j] < a[i])
				break;

		//begin the insert
		if(j != i + 1)
		{
			int	temp = a[i];			
			for(k = i - 1; k > j; k--)
				a[k+1] = a[k];
			a[j] = temp;
		}	
	}

}

void insertsort2(int a[], int n)
{
	int i, j, k;

	for(i = 1; i < n; ++i)
	{
		if(a[i] < a[i-1]){
			int temp = a[i]
			for(j = i -1; j >=0 && (a[j] > temp); j--)
			{
				a[j+1] = a[j];
			}
			a[j+1] = temp;
		}
	}			
}

void insertsort(int a[], int n)
{
	int i, j, k;

	for(i = 1; i < n; ++i)
		for(j = i - 1; j >=0 && (a[j] > a[j+1]))
			swap(&a[j],&a[j+1])
}

void swap(int *p, *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
