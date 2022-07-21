#include<iostream>
using namespace std;
class test
{
	int a=10,b=5;

	private:
	void data()
	{
	cout<<"Class method called1"<<a;
	}
	public:
	void show()
	{
	cout<<"Class method called"<<a;
	data();
	}
};
int main()
{
	test t;
	t.show();
//	t.data();
}
