#include<stdio.h>

#define MAXLENGTH 20

int getLine(char line[],int maxline);
void copy(char to[], char from[]);

main(){
	int length,maxLength;

	char longest[MAXLENGTH];
	char temp[MAXLENGTH];
	
	length = 0;
	maxLength = 0;
	
	while(length = getLine(temp,MAXLENGTH)){
		if(length > maxLength){
			copy(longest,temp);
			maxLength = length;
		}else if(length = 0)
			printf("The input is empty!\n");
	}
	printf("%s",longest);
}


int getLine(char line[],int maxline){
	
	int i, c, lineLength;
	
	i = 0;
	lineLength = 0;

	while((c = getchar()) != '\n'){
		if(c == EOF)
			return 0;
		else 
			line[i++] = c;
	}
	line[i] = '\0';
	return i;
}
	
void copy(char to[], char from[]){
	int i;
	
	for(i = 0; from[i] != '\0'; i++)
		to[i] = from[i];
}

