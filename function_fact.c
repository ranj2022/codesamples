#include<stdio.h>
int factorial(int); // function declaration

int main(){
	int x, y, z;
	x = factorial(6);  // function call
	printf("Factorial of 6 is %d\n",x);
	y = factorial(8);
	printf("Factorial of 8 is %d\n",y);
	z = factorial(9);
	printf("Factorial of 9 is %d\n",z);
	
	printf("Factorial of 10 is %d", factorial(10));
}
//function definition
int factorial(int n){
	int fact =1, i;

	for(i=1;i<=n;i++)
	fact = fact * i;
	
	return fact;
}

