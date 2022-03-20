#include<stdio.h>
#include<string.h>

struct student
{
int rno;
char name[10];
float cgpa;
};

void disp(struct student,struct student ,struct student );
void topper(struct student,struct student, struct student);


int main(){

	struct student s1={111,"ABC",8.7},s2,s3;

	// assign s2 
	s2.rno=101;
	strcpy(s2.name,"XYZ");
	s2.cgpa=7.9;

	// read values from user for s3

	printf("Enter rno, name and cgpa of a student");
	scanf("%d%s%f",&s3.rno,s3.name,&s3.cgpa);

   // display all student records
	printf(" All student deatils\n");
	disp(s1,s2,s3); // function

    printf("Top student deatils\n");
	topper(s1,s2,s3);
    
}

void disp(struct student s1, struct student s2, struct student s3)
{
	printf("\nRNO\t Name:\t CGPA\n");
	printf("%d\t%s\t%f\n",s1.rno,s1.name,s1.cgpa);
	printf("%d\t%s\t%f\n",s2.rno,s2.name,s2.cgpa);
	printf("%d\t%s\t%f\n",s3.rno,s3.name,s3.cgpa);
}

void topper(struct student s1, struct student s2, struct student s3)
{
	if(s1.cgpa>s2.cgpa && s1.cgpa>s3.cgpa)
    	printf("%d\t%s\t%f\n",s1.rno,s1.name,s1.cgpa);
    
     if(s2.cgpa>s1.cgpa && s2.cgpa>s3.cgpa)
    	printf("%d\t%s\t%f\n",s2.rno,s2.name,s2.cgpa);
    
     if(s3.cgpa>s1.cgpa && s3.cgpa>s2.cgpa)
    	printf("%d\t%s\t%f\n",s3.rno,s3.name,s3.cgpa);

}