#include<stdio.h>

int main()
{
    int a=10,b=5;
    swap(&a,&b);
}

void swap(int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
    
    printf("---Swap Value---\n");
    
    printf("A :- %u\n",*a);
    printf("B :- %u\n",*b);
    
}