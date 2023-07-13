//Q [4]

#include<stdio.h>
void main(){

int i,j,r,c;

printf("enter the size of row =");
scanf("%d",&i);
printf("enter the size of column =");
scanf("%d",&j);

int a[i][j];

printf("enter the  array a elements\n");
for(r=0;r<i;r++){
	for(c=0;c<j;c++){
		printf("a[%d][%d]=",r,c);
		scanf("%d",&a[r][c]);
	}
}int p,q,sum=0,s=0;
printf("enter row number :");
scanf("%d",&p);
printf("elemets of row %d:",p);

for(r=0;r<i;r++){
	if (r==p){
		for(c=0;c<j;c++){
			printf("%d",a[r][c]);
			sum=sum+a[r][c];
		}
	}
}

printf("the sum of %d row is %d ",p,sum);
printf("enter the column number :");
scanf("%d",&q);
printf("elements of coloum %d",q);

for(c=0;c<j;c++){
	if(c==q){
		for(r=0;r<i;r++){
			printf("%d",a[r][c]);
			s=s+a[r][c];
		}
	}
}

printf("the sum of %d raw  is %d",q,s);
}
