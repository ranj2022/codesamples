#include<stdio.h>
#include<stdlib.h>

int main(){

	FILE *fp;

	fp=fopen("abc.txt","a+");
    
    char ch;

    printf("Enter some text and to stop press Z");

    while((ch=getchar())!='Z')
    {
       fputc(ch,fp);

    }
    fclose(fp);

    printf("file written!!");
}