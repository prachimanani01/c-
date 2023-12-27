#include<stdio.h>

main()
{
	
 int a,b,c,d,e;
   
   printf("Enter a: ");
   scanf("%d", &a);
   printf("Enter b: ");
   scanf("%d", &b);
   printf("Enter c: ");
   scanf("%d", &c);
   printf("Enter d: ");
   scanf("%d", &d);
   printf("Enter e: ");
   scanf("%d", &e);
   
   if(a>b){
   		if(a>c){
   			if(a>d){
   				if(a>e){
   					printf("a is max.");
				   }else{
				   	printf("e is max.");
				   }
			   }else{
			   	if(d>e){
			   		printf("d is max.");
				   }else{
				   	printf("e is max.");
				   }
			   }
		   }else{
		   		if(c>d){
		   			if(c>e){
		   				printf("c is max.");
					   }else{
					   	printf("e is max.");
					   }
				   }else{
				   	 if(d>e){
				   	 	printf("d is max.");
						}else{
						printf("e is max.");
						}
				   }	
		   }
   }else{
   		if(b>c){
   			if(b>d){
   				if(b>e){
   					printf("b is max.");
				   }else{
				   	printf("e is max.");
				   }
			   }else{
			   	if(d>e){
			   		printf("d is max.");
				   }else{
				   	printf("e is max.");
				   }
			   }
		   }else{
		   		if(c>d){
		   			if(c>e){
		   				printf("c is max.");
					   }else{
					   	printf("e is max.");
					   }
				   }else{
				   	 if(d>e){
				   	 	printf("d is max.");
						}else{
						printf("e is max.");
						}
				   }	
		   }
   }
}