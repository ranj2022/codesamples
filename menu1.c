#include<stdio.h>
void prime(int);
void perfect(int);
void armstrong(int);
int factorial(int);
void strong(int);

int main(){
	int choice,n,x;
	printf("********** Programmer's Menu ************");
	
	do{
	printf("\n1.Check for Prime Number\n2.Check for Perfect Number\n3.Check for Armstrong\n4.Find Factorial\n5.Check for Strong Number\n9.Exit\n");
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
    	        x = factorial(n);
    	       	printf("Factorail of %d is %d\n", n, x);
    	        break;
    	
    	case 5:printf("Enter number");
    	        scanf("%d",&n);
    	        strong(n);
    	        break;
    	        
    	default: printf("Invalid choice.....Pls try again");
	}
    
   } while(choice!=9);

}
// finding prime number
void prime(int n){
	
	int count, i;
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			count++;
			if(count>1)
			break;
		}
	}
	if(count==1)
	printf("%d is prime number\n",n);
	else
	printf("%d is not prime number\n",n);
}

// finding perfect number
void perfect(int n){
	int sum=0,i;
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			sum = sum + i;
		}
	}
	if(sum == n)
	printf("%d is perfect number\n",n);
	else
	printf("%d is not perfect number\n",n);
	
}

//finding Armstrong's number
void armstrong(int n){
	int x, d, sum=0;
	x = n;
	
	while(n>0){
		d = n%10;
		sum = sum + d*d*d;
		n = n/10;
	}
	if(sum == x)
		printf("%d is Armstrong number\n",x);
		else
		printf("%d is not Armstrong number\n",x);
}

// Finding Factorial
int factorial(int n){
	int fact = 1,i;
	for(i=1;i<=n;i++)
	fact = fact*i;
	
     return fact;
}


// Finding Strong number - 1!+4!+5! = 145
void strong(int n){
	int x, d, sum = 0;
	
	x = n;
	while(n>0){
		d = n%10;
		sum = sum + factorial(d);
		n = n/10;
	}
	if(sum == x)
	printf("%d is strong number\n",x);
	else
	printf("%d is not strong number\n",x);
}
