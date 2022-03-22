#include<stdio.h>
#include<stdlib.h>

int main(){

	FILE *fp;

	fp=fopen("abc.txt","r+");
    
    char ch;

  
    while((ch=fgetc(fp))!=EOF)
    {
      printf("%c",ch);

    }

    fclose(fp);

}