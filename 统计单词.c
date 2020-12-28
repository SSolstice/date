#include<stdio.h>
#include<string.h>
#define N 100
int main (){
	int len,i,m,n,k;
	char a[N][N],ch[N];
	
	gets(ch);
	len = strlen(ch);
	for(i = 0,m = 0,n = 0;i < len;i++)//将ch字符串分解为由n个单词，每个单词中字母个数为m的字符串 
	{
		if((ch[i] >= 'a' && ch[i] <= 'z' ) || (ch[i] >= 'A' && ch[i] <= 'Z')){
			a[m][n] = ch[i];
			m++;
		}
		else if(ch[i] == ' '){
			n++;m = 0;k = n;
		}
	}
	printf("%d\n",k+1);
    for(n = 0;n <= k;n++)//将a[m][n]以单词为单位打印出来 
	{
    	for(m = 0;a[m][n] != '\0';m++){
    		putchar(a[m][n]);
		}
		printf("\n");
	}
	return 0;	
}
