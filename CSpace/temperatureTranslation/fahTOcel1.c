#include<stdio.h>

int main(){
	int fahr,celsius,step;
	int lower,upper;

	step = 20;
    lower = 0;
	upper = 300;

	fahr = lower;

	while(fahr <= upper){
		celsius = 5 * (fahr - 32)/9;
		printf("%d\t%d\n",fahr,celsius);
		fahr += step;
	}

}
