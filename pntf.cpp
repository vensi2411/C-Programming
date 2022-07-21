#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp = fopen("C:\\Users\\01\\Desktop\\vensi\\pat4.c","r");


	while(1)
	{
		ch=fgetc(fp);//chracter read karse

		if(ch==EOF)
		break;
		printf("%c",ch);

	}
	fclose(fp);
	return 0;
}		