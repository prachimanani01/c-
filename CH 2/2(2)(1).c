#include<stdio.h>

main()
{
    
    const float pi=3.14;
    float r;
    float area;

    printf("enter radius for find area of circle = ");
    scanf("%d",&r);

    area=pi*r*r;

    printf("area of circle = %.2f\n",area);

}