//Class level abstraction
/*
#include <iostream> 
using namespace std;
class A
{
	private:
		int num=10;
	public:
		void get()
		{
			cout<<num;
		}
};
int main()
{
	A a1;
	a1.get();
	return 0;
}*/
//Header File Abstraction
/*#include <iostream> 
#include<math.h>>
using namespace std;
int main()
{
	int a=4,b;
	b=sqrt(a);
	cout<<b;
	return 0;
}*/
#include <iostream>
#include <string>
using namespace std;
class sample
{
   int num1,num2;
  
   void readNum(){
   cout<<"Enter num1 : "; cin>>num1;
   cout<<"\nEnter num2 : "; cin>>num2;
}
  
public:
void displaySum()
{
   readNum();
   cout<<"\nSum of the two numbers = "<<num1+num2<<endl;
}
  
};
int main()
{
   sample s;
   s.displaySum();
}
