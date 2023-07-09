#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[10], i, j,sum, avg;
	int min, max, x, flag, t;
	
	for(i=0;i<10;i++){
		arr[i] = 1+rand()%100; // random 1-100
		printf("%d ",arr[i]);
		sum += arr[i];
	}
	
	min = arr[0];
	max = arr[0];
	
	for(i=0; i<10;i++){
	if(min>arr[i])
	min = arr[i];
	
	if(max<arr[i])
	max = arr[i];
	}
	
	printf("\nMin = %d and Max= %d\n", min,max);

	printf("Enter search item");
	scanf("%d",&x);
	flag = 0;
	for(i=0; i<10;i++){
	 if(x == arr[i]){
	 	printf("%d is found at index = %d\n", x, i);
	 	flag = 1;
	 }	
     }
     if(flag==0)
     printf("%d is not found\n",x);
     
     //sorting
     for(i=0; i<10;i++){
     	for(j=i+1;j<10;j++){
     		if(arr[i]>arr[j]){
     			t = arr[i];
     			arr[i] = arr[j];
     			arr[j] = t;
			 }
		 }
	 }
     printf(" Array in sorted order\n");
     	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
}
	printf("\n");
}
