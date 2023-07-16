#include<stdio.h>
#include<string.h>

struct student{
	int sid;
	char sname[20];
	float gpa;
};

int main(){
	
	struct student s1={123,"ABC",8.2}, s2, s3, *p, *q, *r;
	
	p = &s1;
	r = &s2;
	q = &s3;
	
	r->sid = 111;
	strcpy(r->sname,"XYZ");
	r->gpa = 9.1;
	
	printf("Enter student details\n");
	scanf("%d%s%f",&q->sid,q->sname,&q->gpa);
	
	
	printf("***********Student details********\n");
	printf("SID\t\tSNAME\t\tGPA\n");
	printf("***********************************\n");
	printf("%d\t\t%s\t\t%.2f\n",p->sid,p->sname,p->gpa);
	printf("%d\t\t%s\t\t%.2f\n",r->sid,r->sname,r->gpa);
	printf("%d\t\t%s\t\t%.2f\n",q->sid,q->sname,q->gpa);
	
	
}

