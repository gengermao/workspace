#include<stdio.h>

#define MAXLENGTH 20

int getLine(char line[],int maxline);
int removeBlank(char s[],int length);

main(){
	int length;

	char temp[MAXLENGTH];
	
	length = 0;
	
	while((length = getLine(temp,MAXLENGTH)) > 0){
		
		if(removeBlank(temp,length) > 0)
			printf("%s",temp);
		
	}
}


int getLine(char line[],int maxline){
	
	int i, c;
	
	i = 0;

	while((c = getchar()) != '\n'){
		if(c == EOF)
			return 0;
		else
			line[i++] = c;
	}
	line[i] = '\n';
	line[i+1] = '\0';
	return i+1;
}
	
int removeBlank(char s[],int length){
	int i, len;
	len = length;
	
	for(i = length-1;i >= 0 ; i++){
		if(' ' == s[i] || '\t' == s[i] ){
			s[i] = '\0';
			--len;
		}else
			break;
	}
	return len;
	
}

