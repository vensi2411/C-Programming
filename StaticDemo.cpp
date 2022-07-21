#include<iostream>
using namespace std;
static int var =0;
void test()
{
    //static int var=0;
	var++;
    cout<<var<<endl;
}
void test1()
{
    //static int var = 0 ;
    var++;
    cout<<var<<endl;
}
int main()
{
    test();
    test1();
   // cout<<var;
    test();
    test1();
    return 0;
}
