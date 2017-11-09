#include<stdio.h>

void fahrTOcelsius(float, float,float);

int main(){

 	printf("Fahrenheit\t\tCelsius\n");
    
	fahrTOcelsius(0,300,20);

}

void fahrTOcelsius(float lower, float upper,float step){
	
	float fahr,celsius;
	
	fahr = 0;
	celsius = 0;

	for(fahr = lower;fahr <= upper;fahr+= step){
		celsius = 5.0 * (fahr - 32)/9.0;
		printf("%10.0f\t\t%7.1f\n",fahr,celsius);

	}

}
