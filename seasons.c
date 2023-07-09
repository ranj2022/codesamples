#include<stdio.h>
int main(){
int monthno;
printf("Enter month no");
scanf("%d",&monthno);

switch(monthno){
	case 3:
    case 4: 
	case 5:
	case 6: printf("Spring\n");
	        break;
	case 7:
    case 8: 
	case 9: printf("Summer\n");
	        break;
	case 10:
	case 11:
	case 12:
	case 1:
	case 2: printf("Winter\n");
	        break;  
    default: printf("PLease enter proper month no (1-12)") ;  
}
}
