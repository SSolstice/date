/*Prints a date in legal from*/
#include<stdio.h>
#include<stdlib.h> 
int main ()
{
	int month,year,day,w;
	
	printf("Please enter date (mm/dd/yy): ");
	scanf ("%d /%d /%d",&month,&day,&year);
	
	printf("Dated this %d",day);
	switch (day){
		case 1: case 21: case 31:
		 printf("st");break;
		case 2: case 22:
		 printf("nd");break;
		case 3: case 23: 
		 printf("rd");break;
		default: printf("th");break;
	}
	printf(" day of ");
	
	switch (month){
		case 1:  printf("Januanry"); break;
		case 2:  printf("February"); break;
		case 3:  printf("March");    break;
		case 4:  printf("April");    break;
		case 5:  printf("May");      break;
		case 6:  printf("June");     break;
		case 7:  printf("July");     break;
		case 8:  printf("August");   break;
		case 9:  printf("September");break;
		case 10: printf("October");  break;
		case 11: printf("November"); break;
		case 12: printf("December"); break; 
    }
    
    printf(", %.2d\n",year);
    w = (day+1+2*month+3*(month+1)/5+year+(year/4)-year/100+year/400) % 7;//吉姆拉尔森公式 
        switch (w){
        	case 1:printf("周一\n");break;
        	case 2:printf("周二\n");break;
			case 3:printf("周三\n");break;
			case 4:printf("周四\n");break;
			case 5:printf("周五\n");break;
			case 6:printf("周六\n");break;
			case 0:printf("周末\n");break;
		}
    system("pause");
    return 0;
	}
