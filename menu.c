#include<stdio.h>

int main(){
	int choice,n;
	printf("********** Programmer's Menu ************");
	
	do{
	printf("1. Check for Prime Number\n2.Check for Perfect Number\n3.Check for Armstrong\n4.Find Factorial\n5.Check for Strong Number\n9.Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    
    switch(choice){
    	case 1: printf("Enter number");
    	        scanf("%d",&n);
    	        prime(n);
    	        break;
    	        
    	case 2: printf("Enter number");
    	        scanf("%d",&n);
    	        perfect(n);
    	        break;
    	        
    	case 3: printf("Enter number");
    	        scanf("%d",&n);
    	        armstrong(n);
    	        break;
    	        
        case 4:printf("Enter number");
    	        scanf("%d",&n);
    	        factorial(n);
    	        break;
    	
    	case 5:printf("Enter number");
    	        scanf("%d",&n);
    	        strong(n);
    	        break;
    	        
    	deafault: printf("Invalid choice.....Pls try again");
	}
    
   } while(choice!=9);

}
