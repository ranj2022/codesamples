#include<stdio.h>
int main(){
	int i,j,k,n=10;
	
	for(i=1;i<=5;i++){
		printf("\n");
		for(j=1;j<=i;j++){
			for(k=1; k<=n;k++){
				if(j==1)
				printf(" ");
			}
			printf(" *  ");
		}
		n = n-2;
	}
}
