#include<stdio.h>
void main()
{
	int i;
	char a[]={'h','e','l','l','o','w','o','r','l','d'};
	
	for(i=0;i<=9;i++){
		a[i]=a[i]-32;
				printf("%c ",a[i]);
	}
}