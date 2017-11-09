#include<stdio.h>

int main(){
	long characters_num = 0;

	while(getchar() != EOF){
		++characters_num;
		printf(" ");
	}
	
	printf("\n characters num is %ld",characters_num);
			
}
