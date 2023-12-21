#include<stdio.h>

void main()
{
	int celsius;
	float fahrenheit;

	 printf("Enter the value of temperature in degree celsius:");
	 scanf("%d",&celsius);
	 fahrenheit=(celsius*9/5)+32;
	 printf("The temperature in fahrenheit is : %f",fahrenheit);

}