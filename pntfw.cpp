#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("C:\\Users\\01\\Desktop\\vensi\\pc.txt","r");
	char line[256];
	int i=0;
	while(fgets(line,sizeof(line),fp))
	{
		i++;
		if(i==8)
		{
			printf("%s",line);
		}
		
	}
	fclose(fp);
	return 0;
}
	