#include<stdio.h>
#include<string.h>

struct student{
	int sid;
	char sname[20];
	float gpa;
};
// function declararions
void findByName(char[],struct student[]);
void findMaxGpa(struct student[]);
void findMinGpa(struct student[]);

int main(){
	
	struct student s[5];
	int i;
	char name[20];
	
	
	for(i=0;i<5;i++){
		printf("Enter student %d details\n", (i+1));
		scanf("%d%s%f",&s[i].sid,s[i].sname, &s[i].gpa);
	}
	
	printf("***********Student details********\n");
	printf("SID\t\tSNAME\t\tGPA\n");
	printf("***********************************\n");
	for(i=0;i<5;i++){
	printf("%d\t\t%s\t\t%.2f\n",s[i].sid,s[i].sname,s[i].gpa);
    }
    
	printf("\n Ennter name of the student to search in the details");
	scanf("%s",name);
	findByName(name, s);
	printf("**************************\n");
	findMaxGpa(s);
	findMinGpa(s);
	
}

void findByName(char name[],struct student s[]){
	int i, flag = 0;
	for(i=0;i<5;i++){
		if(strcmp(name,s[i].sname)==0){
			printf("Found name %s in student %d\n",name,i);
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	printf("Name not found \n");
}
void findMaxGpa(struct student s[]){
	int i;
	float max = s[0].gpa;
	
	for(i=0;i<5;i++){
		if(s[i].gpa>max)
		max = s[i].gpa;
	}
	
	printf("\n Max GPA: %.2f\n",max);
	
}
void findMinGpa(struct student s[]){
	
	int i;
	float min = s[0].gpa;
	
	for(i=0;i<5;i++){
		if(s[i].gpa<min)
		min = s[i].gpa;
	}
	
	printf("\n Min GPA: %.2f\n",min);
}


