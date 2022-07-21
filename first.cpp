#include<iostream>
using namespace std;
int main()
{
	int ch;
	int n1,n2,sum;

	cout<<"1 for maximum"<<endl;
	cout<<"2 for minimum"<<endl;
	cout<<"3 for average"<<endl;
	cout<<"4 for addition of square"<<endl;

	cout<<"press for choice = ";
	cin>>ch;

	cout<<"enter number=";
	cin>>n1>>n2;

	if(ch==1)
	{
	if(n1<n2)
		cout<<"n2 is maximum";	
	else
		cout<<"n1 is maximum";
	}

	
	else if(ch==2)
	{
	if(n1>n2)
		cout<<"n2 is minimum";	
	else
		cout<<"n1 is minimum";
	} 

	else if(ch==3)
	{
		sum = n1 + n2/2;
		cout<<"avg = "<<sum;
	}

	else
	{
		sum = (n1*n1) + (n2*n2);
		cout<<"sum = "<<sum;
	}
	return 0;
}