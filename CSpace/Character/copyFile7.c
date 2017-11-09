#include<stdio.h>

int main(){

	int c,lines_num,blanks_num,tabs_num;
	
	lines_num = 0;
	blanks_num = 0;
	tabs_num = 0;
	
	c = getchar();
	while((c = getchar()) != EOF){
		if('\n' == c)
			++lines_num;
		else if('\t' == c)
			++tabs_num;
		else if(' ' == c)
			++blanks_num;
	}
	
	printf("\n lines num is %d,blanks num is %d,tabs num is %d\n",lines_num,blanks_num,tabs_num);
			
}
