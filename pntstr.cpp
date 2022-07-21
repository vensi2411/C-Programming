

// string function 


#include<stdio.h>
#include<string.h>

int main()
{
	/* char name[6] = {'h','e','l','l','o','\0'};
	printf("name = %s\n",name);
	char string[10];
	printf("enter string = ");
	scanf("%s",string);
	
	gets(string);
	puts(string); */
	
	/* char str1[10] = "hello";
	char str2[10] = "ubantu";
	char str3[10];
	int len,result; */
	
	/* strcpy(str1,str3);
	printf("result = %s\n",str3);
	
	strcat(str1,str2);
	printf("strcat(str1,str2) = %s\n",str1);
	
	len = strlrn(str1);
	printf("strlen(str1) = %d\n",len);
	
	result = strcmp(str1,str2);
	printf("strcmp(str1,str2) = %d\n",result); */ 
	 
	 
// string using loop
	 
	char str[100];
	int i = 0;
	
	printf("enter any string=");
	scanf("%s",str);
	
	while(str[i] != '\0')
	
	{
		printf("the character at %d index position = %c\n",i,str[i]);
		i++;
	}

		
}   
