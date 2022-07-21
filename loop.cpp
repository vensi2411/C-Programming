/* #include<iostream>
using namespace std;
int main()
{
	int num,i=0;
	
	cout<<"enter number = ";
	cin>>num;

	for(i=1;i<=num;i++)
	{
		cout<<i<<endl;
	}

	return 0;
} */


#include<iostream>
using namespace std;
int main()
{
	int n[5];

	for(int i=0;i<5;i++)
	{
			cout<<"enter values = ";
			cin>>n[i];

	}
	for(int i=0;i<5;i++)
		cout<<"value of an array is  "<<  n[i]  << endl ;

}