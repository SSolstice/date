#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define N 100
int main ()
{
	char ch[N],a[N][N],r[N];
	int i,j,k,l,len,n;
	gets(ch);
	len = strlen(ch);
	for(i = 0,j = 0,k = 0,l = 0;l < len;l++){
		if((ch[l] >='A' && ch[l] <= 'Z') || (ch[l] >='a' && ch[l] <= 'z')){
			a[i][j] = ch[l];j++;}
	    else if(ch[l] == ' '){
	    	i++;j = 0;n = i;}
		else {
		    r[k] = ch[l];k++;}
	}
	for(i = 0,j = N-1;i <= n;i++){
		for(;j >= 0;j--){
			if(a[i][j] != '\0')
			putchar(a[i][j]);
		}
		if(i != n)
		printf(" ");
		j = N-1;
	}
	puts(r);
	return 0;
 } 
