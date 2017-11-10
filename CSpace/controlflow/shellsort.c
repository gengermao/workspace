#include <stdio.h>

void shellsort(int v[], int n);

void main()
{
	int v[23] = {263,4,3,352,28,2,55,20,100,87,348,32,211,1,34,12,23,22,19,102,8,90,49};
	int i;

	shellsort(v,23);
	
	for(i = 0; i < 23; ++i)
		printf("a[%d]=%d ",i, v[i]);

	printf("\n");
}

void shellsort(int v[], int n)
{
	int gap, i, j, temp;

	for(gap = n/2; gap > 0; gap /= 2){
		printf("for(gpa=%d; %d > 0; %d/=2 ){\n",n/2,gap,gap);
		for(i = gap; i < n; i++ ){
			printf("\tfor(i = %d; %d < n; %d++){\n",gap,i,i);
			for(j = i - gap; j >= 0 && (v[j] > v[j+gap]) ; j -= gap)
			{
				printf("\t\tfor(j = %d - %d; (v[%d] > v[%d]) && %d >= 0; %d -= gap)\n",i,gap,j,j+gap,j,j);
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
			printf("\t\t}\n");
		}
		printf("\t}\n");
	}
	printf("}\n");
}
