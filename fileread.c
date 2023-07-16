#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	int ch; // to keep track of character read from the file
	fp = fopen("fileread.c","r");
	int cc = 0;
	int lc = 0;
	int wc = 0;
	while((ch = fgetc(fp)) != EOF){
		printf("%c",ch);
		cc++;
		
		if(ch=='\n')
		lc++;
		
		if(ch==' ')
		wc++;
	}
	printf("\n No. of chars : %d",cc);
	printf("\n No. of lines : %d",lc);
	printf("\n No. of words : %d",(wc+lc));
	
	fclose(fp);
}
