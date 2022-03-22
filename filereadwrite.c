#include<stdio.h>
#include<stdlib.h>

int main(){

	FILE *fr,*fw;

	fr=fopen("filereadwrite.c","a+");
  fw=fopen("xyz.txt","w+");

  char ch;
  int count=0;
    while((ch=fgetc(fr))!=EOF)
    {

     fputc(ch,fw);
     count++;

    }
    fprintf(fw,"\n The no of chars\n: %d",count);

    fclose(fr);
    fclose(fw);

    printf("File written to xyz.txt\n");

}