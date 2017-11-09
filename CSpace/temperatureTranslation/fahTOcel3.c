#include<stdio.h>

int main(){
	float fahr,celsius,step;
	int lower,upper;

	step = 20;
    lower = 0;
	upper = 300;

	fahr = lower;
	
 	printf("Fahrenheit\t\tCelsius\n");

	while(fahr <= upper){
		celsius = 5.0 * (fahr - 32)/9.0;
		printf("%10.0f\t\t%7.1f\n",fahr,celsius);
		fahr += step;
	}

}
