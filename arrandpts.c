#include<stdio.h>

int main()
{
	
	int arr[]={10,20,30,40,50};

	int i, *ptr;
    
    ptr=arr; // no '&' address of operator  as array itself is a pointer
    // using array name and subscipt operator

 	for(i=0;i<5;i++)
 		printf("%p \t %d\n",&arr[i],arr[i]);
    printf("**************************\n");

    // using array name as pointer
 	for(i=0;i<5;i++)
 		printf("%p \t %d\n",arr+i, *(arr+i));

     printf("**************************\n");
    // using pointer and subscipt operator
	for(i=0;i<5;i++)
 		printf("%p \t %d\n",&ptr[i],ptr[i]);

    printf("**************************\n");

    // using pointer
 	for(i=0;i<5;i++)
 		printf("%p \t %d\n",ptr+i, *(ptr+i));
	
}