#include<stdio.h>

void main()
{
	int a,b,c,d,e;

	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	printf("Enter the value of d:");
	scanf("%d",&d);
	printf("Enter the value of a:");
	scanf("%d",&e);


	(a>b)?(a>c)?(a>d)?(a>e)?printf("a is maximum....!")
			       :printf("e is maximum....!")
			:(d>e)?printf("d is maximum")
			      :printf("e is maximum")
		  :(c>d)?(c>e)?printf("c is maximum")
			      :printf("e is maximum")
			:(d>e)?printf("d is maximum")
			      :printf("e is maximum")
	    :(b>c)?(b>d)?(b>e)?printf("b is maximum")
			      :printf("e is maximum")
			:(d>e)?printf("d is maximum")
		  :(c>d)?(c>e)?printf("c is maximum")
			      :printf("e is maximum")
			:(d>e)?printf("d is maximum")
			      :printf("e is maximum");


}