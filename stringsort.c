// program to read city names and print
#include<stdio.h>
#include<string.h>

int main(){

	char cities[5][10];
	int i,j;
	char temp[10];

	printf("Enter your fav cities");
	for(int i=0;i<5;i++)
	scanf("%s",cities[i]);

     for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){

      if(strcmp(cities[i],cities[j])>0)
      { 
         strcpy(temp,cities[i]);
         strcpy(cities[i],cities[j]);
         strcpy(cities[j],temp);
      }
     }
  }


   printf("your fav cities:\n");

    for(int i=0;i<5;i++)
	printf("%s\n",cities[i]);

    
}