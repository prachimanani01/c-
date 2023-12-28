#include<stdio.h>

void cube(int x){
	printf("Cube of %d is %d",x,x*x*x);
}
void main(){
	
	int a;
	printf("Enter any Value :- ");
	scanf("%d",&a);
	cube(a);	
}