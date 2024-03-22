
#include <stdio.h> 

int main() 
{ 
	int year; 
	printf("Enter the year:\n");
	scanf("%d",&year);

	(year%4==0) && (year%100!=0)? printf("The year %d is a leap year",year):
	
(year%400==0)?printf("The year %d is a leap year",year):
 
 printf("The year %d is not a leap year",year);
		
	return 0; 
} 
