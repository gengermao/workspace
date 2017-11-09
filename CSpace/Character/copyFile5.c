#include<stdio.h>

int main(){

	int c,lines_num;
	
	lines_num = 0;	
	c = getchar();
	while((c = getchar()) != EOF){
		if('\n' == c)
			++lines_num;
	}
	
	printf("\n lines num is %d",lines_num);
			
}
