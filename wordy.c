#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define N 100
int main()
{
	bool b = false;
	int n,i,len,j,k,h;
	char ch[N],a[N][N];
	printf("Please enter a sentence about a math problem: \n");
	gets(ch);
	printf("\n");
	len = strlen(ch);
	for(i = 0,j = 0,k = 0;i < len;i++){
		if(ch[i] != ' '){
			a[j][k] = ch[i];
			k++;
		}
		else{
			j++;k = 0;h = j;
		}
	}
	for(j = 0;j <= h;j++){
		if(!b && (a[j][0] >= '0' && a[j][0] <= '9')){
		    n = atoi(a[j]);
		    b = true;
	    }
	    else{
	    	if(strcmp(a[j],"plus") == 0)
			    n += atoi(a[j+1]);
		    else if(strcmp(a[j],"minus") == 0)
			    n -= atoi(a[j+1]);
		    else if(strcmp(a[j],"multiplied") == 0 && strcmp(a[j+1],"by") == 0)
		        n *= atoi(a[j+2]);
		    else if(strcmp(a[j],"divided") == 0 && strcmp(a[j+1],"by") == 0)
		        n /= atoi(a[j+2]);
		}
	}
	printf("The answer is %d.\n",n);
	return 0;
}
