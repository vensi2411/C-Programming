#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	cout<<"x == "<<*x<<endl;
	cout<<"y == "<<*y<<endl;
}
int main()
{
	int a,b;
	cin>>a>>b;
	swap(&a,&b);
	return 0;
}