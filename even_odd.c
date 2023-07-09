#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[25], i,sum=0;
	
	for(i=0;i<25;i++){
		arr[i] = rand()%100+1;
	    printf("%d ",arr[i]);
	    }
		printf("\n");
	
		for(i=0;i<25;i++){
		if(arr[i]%2==0)
		printf("%d\t%d\n",arr[i],arr[i]*arr[i]);		
		}
	
	
	printf("\n");
}
