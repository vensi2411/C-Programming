#include<iostream>
using namespace std;
/*
void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	cout<<"x =="<<*x;//x
	cout<<"y =="<<*y;//y
}
int main()
{
	int a, b;
	cin >>a>>b;
	swap(&a,&b);
	return 0;
}
*/
void fun(int *a) //1000
{
	*a=20;
	cout<<*a<<endl;
}
int main()
{
	int a=10;
	fun(&a);//1000;
	cout<<a<<endl;
}
