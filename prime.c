#include<stdio.h>
#include<stdlib.h>
int main(){

int n,i,count = 0;
n = rand()%100+1; // 1 - 100
printf("Number Generated = %d\n",n);
for(i=1; i<=n; i++){
	if(n%i==0){
		printf("Factor =%d\n",i);
		count++; // keep track of count of factors
	}
}
printf("Count of factors of %d is %d\n",n,count);
}
