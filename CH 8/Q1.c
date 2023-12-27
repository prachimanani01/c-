#include<stdio.h>
void main(){
  int n,m;
  
  
  printf("Enter row size:");
  scanf("%d",&n);
  
  printf("Enter Column size:");
  scanf("%d",&m);
  
  int i,j;
  int a[n][m],b[n][m],c[n][m];
  printf("Enter the value of A element:-\n");
  
  for(i=0;i<n;i++){
  	for(j=0;j<m;j++){
  		printf("Enter a[%d][%d]:",i,j);
  		scanf("%d",&a[i][j]);
	  }
  }
  
  printf("Enter the value of B element:-\n");
  
   for(i=0;i<n;i++){
  	for(j=0;j<m;j++){
  	    printf("Enter b[%d][%d]:",i,j);
  		scanf("%d",&b[i][j]);
	  }
  }
  printf("Addition,substraction and multiplication is:-\n");
  for(i=0;i<n;i++){
  	for(j=0;j<m;j++){
            printf("The Addition of %d and %d is :%d\n",a[i][j],b[i][j],a[i][j]+b[i][j]);
           
            printf("The substraction of %d and %d is :%d\n",a[i][j],b[i][j],a[i][j]-b[i][j]);
           
            printf("The multiplication of %d and %d is :%d\n",a[i][j],b[i][j],a[i][j]*b[i][j]);
            printf("\n");
         }
 }
}
 