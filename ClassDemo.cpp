#include<iostream>
using namespace std;
class person
{
	int sid;
	string name="";
	public:	
		void getData(int a,string n1)
		{
			sid=a;
			name=n1;
			
		}		
		void showData()
		{
			cout<<sid<<"\n";
			cout<<name;
		}
};

int main()
{
	person p1;
	p1.getData(1,"abc");
	p1.showData();
}
