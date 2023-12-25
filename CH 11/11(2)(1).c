#include<stdio.h>
main()
{
	int n;
	printf("enter the array size:");
	scanf("%d",&n);

	int a[n];
	int i;

	printf("enter the array element:\n");

	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}

	int *p[n];



    for(i=n;i>=0;i--)
	{
     	p[i]=&a[i];
	}

	for(i=n-1;i>=0;i--)
	{
	   	printf("Reversed array elements is:%d\n",*p[i]);   
    }


}