// Q [1]

#include<stdio.h>
void main (){
	int i,j,r;
	
	printf("enter array  s size  ");
	scanf("%d",&i);
	
	int a[i];
	
	for (r=0;r<i;r++){
		printf("a[%d]=",i);
		scanf("%d",&a[r]);
	}
	printf("negative elements ");
	
	for (r=0;r<i;r++){
		if(a[r]<0){
			
			printf("%d",a[r]);
		}
	}	
}
