#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20


int main(){
	float fahr,celsius;
	
 	printf("Fahrenheit\t\tCelsius\n");
    
	for(fahr = UPPER;fahr >= LOWER;fahr-= STEP){
		celsius = 5.0 * (fahr - 32)/9.0;
		printf("%10.0f\t\t%7.1f\n",fahr,celsius);

	}

}
