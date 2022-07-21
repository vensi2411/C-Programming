#include<iostream>
using namespace std;
void fun(int x,int y)
{
	x=15;
	y=20;
	cout<<x<<endl<<y<<endl;
	
}
int main()
{
	int x=5,y=10;
	fun(x,y);
	cout<<x<<endl<<y<<endl;
	return 0;
}