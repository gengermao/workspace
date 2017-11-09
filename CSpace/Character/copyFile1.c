#include<stdio.h>

int main(){
	int c;
	
	while((c = getchar()) != EOF){
		putchar(c);
		printf(" ");
	}
	
	printf("\nEOF is %d",EOF);
			
}
