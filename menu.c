#include<stdio.h>

void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
void mod(int,int);

int main(){
int a,b, choice;
char yesorno='y';
printf("Enter two numbers:");
scanf("%d%d",&a,&b);

while(yesorno=='y')
{
printf("Arithmetic Menu:\n *****************\n");
printf(" Select 1: ADD\n Select 2: SUB\n Select 3: MUL\n Select 4: DIV\n Select 5: MOD\n");
scanf("%d",&choice);

switch(choice)
{
	case 1: add(a,b);
	        break;
	case 2: sub(a,b);
	        break;
	case 3: mul(a,b);
	        break;
	case 4: div(a,b);
	        break;
	case 5: mod(a,b);
	        break;
	default: printf("Enter as per Menu provided!\n");
}

printf("DO you wish to continue? (press y to continue!)\n");
scanf(" %c",&yesorno);

}

}

void add(int x,int y){
printf("SUM= %d\n",x+y);
}

void sub(int x,int y){
printf("DIFF= %d\n",x-y);
}

void mul(int x,int y){
printf("PROD= %d\n",x*y);
}

void div(int x,int y){
printf("RES= %d\n",x/y);
}

void mod(int x,int y){
printf("REMINDER= %d\n",x%y);
}
