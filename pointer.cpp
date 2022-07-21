
#include<iostream>
using namespace std;
int main()
{
	//Pointer 
	/*int a=5,b=10;
	int *p ;
	p=&a;
	p=&b;
	cout<<p;*/
	int a=5,b=10;
	int &p = a;
	&p=b;

}
