#include<stdio.h>

#define IN  1
#define OUT 0

int main(){

	int c,lines_num,characters_num,words_num;
	//int lastc;
	int inWord , outWord;

	lines_num = 0;
	characters_num = 0;
	words_num = 0;
	
	state = OUT;

    while((c = getchar()) != EOF){
		++characters_num;
		if('\n' == c)
			++lines_num;
		if(c  == ' ' || c == '\n' c == '\t')
			state = OUT;
		else if(state == OUT){ 
			state = IN;
			++words_num;
		}
		
	
	}

	/*
	lastc = 'a';
    
	while((c = getchar()) != EOF){
		++characters_num;
		if('\n' == c)
			++lines_num;
		if((c == ' '|| c == '\n' || c == '\t') && lastc != ' ' && lastc != '\n' && lastc != '\t')
			++words_num;
		lastc = c;
		
	}
	*/
	printf("\n lines num is %d,characters num is %d,words num is %d\n",lines_num,characters_num,words_num);
			
}
