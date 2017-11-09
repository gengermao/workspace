#include<stdio.h>

int main(){

	int c;
	int moreblank_state;

	moreblank_state = 0;
	c = getchar();

	while((c = getchar()) != EOF){
			
		if(' ' == c)
			++moreblank_state;
		else
			moreblank_state = 0;
		
	    if(moreblank_state < 2)
			putchar(c);
	}
   

    int lastc;
	/*---------------------------2----------------------------------
	lastc = 'a';	
    while((c = getchar()) != EOF){
   		if(c != ' ')
			putchar(c);
		if(c == ' '){
			if(lastc != ' ')
				putchar(c);
		}
		lastc = c;
   
   }
   ------------------------------3----------------------------------
    while((c = getchar()) != EOF){
   		if(c != ' ')
			putchar(c);
		else if(lastc != ' ')
			putchar(c);
		lastc = c;
   }
   -----------------------------4------------------------------------
	while((c = getchar()) != EOF){
		if(c != ' ' || lastc != ' ')
			putchar(c);
		lastc = c ;
	}

   */
}
