#include<iostream>
using namespace std;
void swap(int x,int y)
{
	int temp;
	cout<<"x == "<<x<<endl;
	cout<<"y == "<<y<<endl;
	temp=x;
	y=temp;
	
}
int main()
{
	int a,b;
	cin>>a>>b;
	swap(a,b);
	return 0;
}