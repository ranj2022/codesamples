// program to read city names and print
#include<stdio.h>
int main(){

	char cities[5][10];

	int i;

	printf("Enter your fav cities");
	for(int i=0;i<5;i++)
	scanf("%s",cities[i]);

   printf("your fav cities:\n");

    for(int i=0;i<5;i++)
	printf("%s\n",cities[i]);

    
}