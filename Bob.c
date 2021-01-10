#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
	int len,i;
	char ch[N];
	
	gets(ch);
	len = strlen(ch);
	for(i = 0;i < len;i++){
		if(ch[i] >= 'a' && ch[i] <= 'z')
		break;
	}
	if(i == len){
		if(ch[i-1] == '?')
		    printf("Calm down, I know what I'm doing!");
		else
		    printf("Whoa, chill out!");
	}
	else {
		if(strcmp(ch,"How are you?") == 0)
	        printf("Sure.");
	    else if(strcmp(ch,"Bob") == 0)
	        printf("Fine. Be that way!");
	    else 
	        printf("Whatever.");
	}
	return 0;
 } 
