#include<iostream>
using namespace std;
/*void swap(int &x, int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"x =="<<x;//&x
	cout<<"y =="<<y;//&y
}
int main()
{
	int a, b;
	cin >>a>>b;
	swap(a,b);
	return 0;
}*/

void fun(int &a, int b)
{
	a=15;
	b=20;
	cout<<a<<endl<<b<<endl;
}
int main()
{
	int a=5,b=10;
	fun(a,b);
	cout<<a<<endl<<b;
	return 0;
}

