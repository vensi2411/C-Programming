// Static Demo
#include <iostream>
using namespace std;

void test()
{
    static int var = 0;
    var= var+1; //1+1 = 2+1 =3
    cout << var << endl;
}

int main()
{    
    test();//1
    test();//2
    test();//3
    return 0;
}