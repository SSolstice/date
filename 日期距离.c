#include<stdio.h>
int main(void)
{
	int d,m,y;
	int a,b,c;
	int n1,n2;
	char *month[] = {"January","February", "March","April",
	                "May","June","July","August",
					"September","October","November","December"};
	scanf("%d/%d/%d",&a,&b,&c);
	if(a > 12){
		y = a;m = b;d = c;
		printf("%s %d, 20%d\t",month[m-1],d,y);
	}
	else {
		if(b > 12){
			m = a;d = b;y = c;
			printf("%s %d, 20%d\t",month[m-1],d,y);
		}
		else{
			y = a;m = b;d = c;
			if(m > 2 && y%4 != 0)
			    n1 = y*365 + (m-1)*30 + d + y/4 +m/2 -2;
			else if(m > 2 && y%4 == 0)
			    n1 = y*365 + (m-1)*30 + d + y/4 +m/2 -1;
			else if(m <= 2)
			    n1 = y*365 + (m-1)*31 + d + y/4;
		    m = a;d = b;y = c;
			if(m > 2 && y%4 != 0)
			    n2 = y*365 + (m-1)*30 + d + y/4 +m/2 -2;
			else if(m > 2 && y%4 == 0)
			
			    n2 = y*365 + (m-1)*30 + d + y/4 +m/2 -1;
			else if(m <= 2)
			    n2 = y*365 + (m-1)*31 + d + y/4;
			printf("%d",n2-n1);
		}
	}
	return 0;
}
