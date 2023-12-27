#include<stdio.h>

void main(){
   char a[]={'H','e','l','L','o','w','o','r','L','D'};
   int i;
	
	for(i=0;i<=9;i++){
		if(a[i]>='A' && a[i]<='Z'){
			a[i]=a[i]+32;
		}else if(a[i]>='a' && a[i]<='z'){
		    a[i]=a[i]-32;	
		}
		printf("%c",a[i]);
	}
	
}