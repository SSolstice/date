#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
	int n,i,x,a,y;
	char ch[N];
	scanf("%d",&n);
	for(n,a = 0;a <= n;a++){
	    gets(ch);
	    i = strlen(ch);
		x = 0;
		for(;ch[x] == 'A';x++){}
		y = x + 3;
		for(;y <= 2*x + 3;){
			if(ch[y] != 'A')
			break;
			else y++;
		}
		if(ch[x] == 'S' && ch[x+1] == 'C' && ch[x+2] == 'U' && y == 2*x + 3 && i == 2*x + 3)
		printf("Yes\n");
		else if(a > 0)printf("No\n");
		}
	return 0;
 } 
