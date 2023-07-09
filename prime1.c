#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i,count = 0;
printf("Enter a no");
scanf("%d",&n);
for(i=1; i<=n/2; i++){
	if(n%i==0){
		printf("Factor =%d\n",i);
		count++; // keep track of count of factors
		if(count>1)
		break;
	}
}
printf("Count of factors of %d is %d\n",n,count);
if(count == 1)
printf("%d is prime\n",n);
else
printf("%d is not prime\n",n);

printf("Loop executed for %d times\n",(i-1));
}
