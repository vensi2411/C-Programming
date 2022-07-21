//array of pointer


#include<stdio.h>
int main()
{


int var[3]={10,100,200};
int i,*ptr[3];
for(i=0;i<3;i++)
{
	ptr[i]=&var[i];
}

for(i=0;i<3;i++)
{
	printf("value of var[%d]= %p\n",i,*ptr[i]);
	printf("value of var[%d]= %d\n",i,*ptr[i]);
} return 0;
}