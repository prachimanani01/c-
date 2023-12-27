#include<stdio.h>
void main()
{
	int i;
	char a[]={'H','E','L','L','O','W','O','R','L','D'};
	
	for(i=0;i<=9;i++){
		a[i]=a[i]+32;
				printf("%c ",a[i]);
	}
}