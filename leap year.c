#include<stdio.h>
int main()
{
	int year;
	scanf("%d",&year);
	if(year%100!=0 && year%4==0 || year%400==0)
	{
		printf("Leap year");
	}
	else{
		printf("not a leap year");
	}
}
