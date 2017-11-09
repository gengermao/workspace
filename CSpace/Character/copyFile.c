#include<stdio.h>

int main(){
	int c;

	c = getchar();
	//putchar(c);
	
	while(c != EOF){
		putchar(c);
		printf(" ");
		c = getchar();
	}
	
}
