#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fr, *fw;
	int ch; // to keep track of character read from the file
	fr = fopen("file_read_write.c","r");
	fw = fopen("filer_w.c","w");
	int cc = 0;
	int lc = 0;
	int wc = 0;
	while((ch = fgetc(fr)) != EOF){
	//	printf("%c",ch);
		fputc(ch,fw); // to new file
		cc++;
	
		if(ch=='\n')
		lc++;
		
		if(ch==' ')
		wc++;
	}
	printf("\n No. of chars : %d",cc);
	printf("\n No. of lines : %d",lc);
	printf("\n No. of words : %d",(wc+lc));
	
	fclose(fr);
	fclose(fw);
}
