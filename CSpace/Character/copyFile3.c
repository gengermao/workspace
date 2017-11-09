#include<stdio.h>

int main(){

	double characters_num;	
	
	for(characters_num = 0; getchar() != EOF; characters_num++)
		;
	
	printf("\n characters num is %d",characters_num);
			
}
