#include<iostream>
using namespace std;

class test
{
	int a=10;
	public:
	void show()
	{
		cout<<"hello! good afternoon";
	}

	public:
	void course()
	{
		cout<<endl<<"integrated msc.it";
	}	

	public:
	void student()
	{
		cout<<endl<<"vensi sohaliya";
	}

	//================================================
	private:
	void faculty()
	{
		cout<<endl<<"komal domadiya";
	}	
	//=================================================
	
	public:
	void subject()
	{
		cout<<endl<<"object-oriented programming   "<<a;
		faculty();
	}				
};
int main() 
{
	test t;
	t.show();
	t.course();
	t.student();
	//t.faculty(); // can not get output
	t.subject();
	return 0;
}