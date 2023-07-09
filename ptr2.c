#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n,m, *p, i, sum = 0;
	printf("Enter how many elements");
	scanf("%d",&n);
	
	p = (int*) calloc(n, sizeof(int));
	
	for(i=0; i<n; i++){
		printf("Enter element %d: ",i);
		scanf("%d", p+i);	
	}
	
	printf("How many more elements");
	scanf("%d",&m);
	
	p = (int*) realloc(p, (n+m)*sizeof(int));
	//
	for(i=n; i<(m+n); i++){
		printf("Enter element %d: ",i);
		scanf("%d", p+i);	
	}
	
	for(i=0;i<(m+n);i++){
		printf("%d\n",*(p+i));
		sum = sum + *(p+i);
	}
	
	printf("Sum = %d\n",sum);
	
	free(p); //
	
	
}
	
