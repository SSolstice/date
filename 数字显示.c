#include<stdio.h>
#include<string.h>
#define N 100
int main ()
{
	int i,k;
	int n,len,r;
	char ch[N];
	
	scanf("%d",&k);
	for(i = 0;i < k;i++){
		scanf("%s",&ch);
	    printf("%s:\n",ch);
		len = strlen(ch);
		for(r = 0,n = 0;r < 7;r++){
			for(n = 0;n < len;n++){
			    if(r == 0 && (ch[n] == '0' || ch[n] == '2' || ch[n] == '3'
				   || ch[n] == '5' || ch[n] == '6' || ch[n] == '7'
				   || ch[n] == '8' || ch[n] == '9'))
				    printf("*****  ");
				else if(r == 0 && ch[n] == '1')
				    printf("    *  ");
				else if(r == 0 && ch[n] == '4')
				    printf("*   *  ");
				else if((r == 1 || r == 2) && (ch[n] == '1' || ch[n] == '2' || ch[n] == '3'
				        || ch[n] == '7'))
					printf("    *  ");
				else if((r == 1 || r == 2) && (ch[n] == '0' || ch[n] == '4' || ch[n] == '8'
				        || ch[n] == '9'))
					printf("*   *  ");
				else if((r == 1 || r == 2) && (ch[n] == '5' || ch[n] == '6'))
				    printf("*      ");
				else if(r == 3 && ch[n] == '0')
				    printf("*   *  ");
				else if(r == 3 && (ch[n] == '1' || ch[n] == '7'))
				    printf("    *  ");
				else if(r == 3 && (ch[n] == '2' || ch[n] == '3' ||ch[n] == '4'
				        || ch[n] == '5' || ch[n] == '6' || ch[n] == '8' || ch[n] == '9'))
				    printf("*****  ");
				else if((r == 4 || r == 5) && (ch[n] == '0' || ch[n] == '6' || ch[n] == '8'))
				    printf("*   *  ");
				else if((r == 4 || r == 5) && (ch[n] == '1' || ch[n] == '3' || ch[n] == '4'
				        || ch[n] == '5' || ch[n] == '7' || ch[n] == '9'))
				    printf("    *  ");
				else if((r == 4 || r == 5) && ch[n] == '2')
				    printf("*      ");
				else if(r == 6 && (ch[n] == '0' || ch[n] == '2' || ch[n] == '3' || ch[n] == '5'
				        || ch[n] == '6' || ch[n] == '8'))
				    printf("*****  ");
				else if(r == 6 && (ch[n] == '1' || ch[n] == '4' || ch[n] == '7' || ch[n] == '9'))
				    printf("    *  ");
		    }
			printf("\n");
		}
	}
	return 0;
 } 
