#include<stdio.h>

int main(){
	float fahr,celsius,step;
	int lower,upper;

	step = 20;
    lower = 0;
	upper = 300;

	fahr = lower;

	while(fahr <= upper){
		celsius = 5.0 * (fahr - 32)/9.0;
		printf("%3.0f\t%6.1f\n",fahr,celsius);
		fahr += step;
	}

}
