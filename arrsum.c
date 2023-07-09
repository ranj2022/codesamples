#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[10], i, sum, avg;
	
	for(i=0;i<10;i++){
		arr[i] = 1+rand()%100; // random 1-100
		printf("%d ",arr[i]);
		sum += arr[i];
	}
	
	printf("\nSum =%d\n",sum);
	avg = sum/10;
	printf("Avg = %d\n",avg);
	
	
}
