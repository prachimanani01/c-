#include<stdio.h>
void main(){
  int n,m,i,j,sum;
  
  printf("Enter array size:");
  scanf("%d",&n);
  
  printf("Enter array size:");
  scanf("%d",&m);
  
 
  int a[n][m],b[n][m];

  
  for(i=0;i<n;i++){
  	for(j=0;j<m;j++){
  		printf("Enter a[%d][%d]:",i,j);
  		scanf("%d",&a[i][j]);
	  }
  }
  
  for(i=0;i<n;i++)
  {
  	for(j=0;j<m;j++)
    {
      sum=sum+a[i][j];
		}
  }
  
  printf("The sum of all element is :%d\n",sum);
         
}
 