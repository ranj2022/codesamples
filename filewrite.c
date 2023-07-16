#include<stdio.h>
#include<stdlib.h>

int main(){
	
	FILE *fp;
	fp = fopen("sample.txt","a");
	int cc = 0;
	char ch;
	char str[100] = "\nThis file is written on Date: 16th July, 2023";
	printf("Enter text and stop by pressing 'Z'");
	
	while((ch=getchar()) != 'Z'){
		fputc(ch,fp);
		cc++;
	}

	fprintf(fp,"\nThe no of characters in the above text is %d",cc);
	
	fputs(str,fp);
	
	
	printf("File written successfully!\n");
	fclose(fp);
}
