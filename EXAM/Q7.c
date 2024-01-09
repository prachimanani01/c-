//WAP to program 3 and 5 divisible using UDF.
#include<stdio.h>

void div()
{
	
	int a;
	
	printf("Enter number:- ");
	scanf("%d",&a);
	
	if(a%3==0 || a%5==0)
	{
		printf("the numbers are divisible..");
	}else
	{
		printf("the numbers are not divisible..");
	}
	
}

main()
{
	
	div();
	
}
