#include<stdio.h>
void main(){
  int i,j,n,m;
  float a[10][10],sum=0.0,avg;

  printf("Enter row size:");
  scanf("%d",&m);
  
  printf("Enter Column size:");
  scanf("%d",&n);
  
  printf("Enter elements:\n");

  for(i=0;i<m;i++){
  	for(j=0;j<n;j++){
  		printf("Enter a[%d][%d]:",i,j);
  		scanf("%f",&a[i][j]);
	  }
  }
  
  for(i=0;i<m;i++){
  	for(j=0;j<n;j++){
  	    sum=sum+a[i][j];
	  }
  }
 
    avg=sum/(m*n);
    
 	printf("Sum:%f\n",sum);
 	printf("Average:%f",avg);
 }