#include<stdio.h>

int main(){

	int c,lines_num;	
	c = getchar();
	for(lines_num = 0;c != EOF;c = getchar()){
		if('\n' == c)
			++lines_num;
	}
	
	printf("\n lines num is %d",lines_num);
			
}
