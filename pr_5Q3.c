// Q [3]

#include<stdio.h>
void main (){
	
	int i,j,r,c,sum=0;
	
	printf("enter  array s row size of row & colum");
	scanf("%d",&i);
	
	
	int a[i][i];

	printf("enter the aeeay s elements \n");	
	for(r=0;r<i;r++){
		for(c=0;c<j;c++){
			printf("a[%d][%d]:",r,c);
			scanf("%d",&a[r][c]);
		}
	}for(r=0;r<i;r++){
		for(c=0;c<j;c++){
			
		printf("%d",a[c][r]);	
			
		}
   printf("\n");	
	
}
}

