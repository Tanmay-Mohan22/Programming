#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	FILE *fp,*fp1;
	char ch;
	int i=0;
	fp=fopen("file1.txt","r");
	while(ch!=EOF)
	{
		i++;
		ch=getc(fp);
		printf("%c",ch);
	} 
		fclose(fp);
	int ft;
	fp=fopen("file3.txt","w");
	if(fp==NULL)
	{
		printf("ERROR");
    }    
	fseek(fp,0,SEEK_END);
	ft=ftell(fp);
	while(i<ft)
	{
		i++;
		fseek(fp,-1,SEEK_END);
		printf("%c",fgetc(fp));
	}
	return 0;
   fp= fopen("file1.txt", "r");
   if (fp == NULL) 
   {
      printf("Press any key to exit...\n");
      exit(EXIT_FAILURE);
   }
   fp1 = fopen("file2.txt", "r");
   if (fp1 == NULL) 
   {
      fclose(fp);
      printf("Press any key to exit...\n");
      exit(EXIT_FAILURE);
    }
   while ((ch = fgetc(fp)) != EOF)
      fputc(ch, fp1);
   printf("File copied successfully.\n");
   fclose(fp);
   fclose(fp1);
   return 0;
}
