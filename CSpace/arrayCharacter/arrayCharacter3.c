#include<stdio.h>

#define MAXLENGTH 20

int getLine(char line[],int maxline);
int reverse(char s[],int length);

main(){
	int length;

	char temp[MAXLENGTH];
	
	length = 0;
	
	while((length = getLine(temp,MAXLENGTH)) > 0){
		
		if(reverse(temp,length) > 0)
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
	
int reverse(char s[],int length){
	int i, len, temp;
	len = length - 2;

	temp = 0;
	
	for(i = len;i >= len/2 ; i--){
		temp = s[i];
		s[i] = s [len -i];
		s[len - i] = temp;
	}
	return len;
	
}

