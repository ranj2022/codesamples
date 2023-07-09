#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int x,y,*p,*q;
	x = rand()%100+1;
	y = rand()%100+1;
	
	printf("%d\t%d",x,y);
	
	p = &x;
	q = &y;
	printf("\n%p\t%p\n",p,q);
	
	printf("\nSum =%d\n", (*p+*q));
	
}
