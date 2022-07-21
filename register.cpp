/* #include <iostream>
using namespace std; 
void registerStorageClass()
{ 
    register char b = 'G';
    cout << "Value of the variable 'b' declared as register: " << b;
}
int main()
{
    registerStorageClass();
    cout<<b;
    return 0;
}

* ********************************************************

#include<iostream>
using namespace std;
int g;
void test_function()
{
    static int s;    //static variable, initially holds 0
    register int r;    //register variable
    cout<<"Befor ini"<<s;
    r=5;
    s=s+r*2;
    cout<<"Inside test_function"<<e;
}

****************************************************

// Register Value
#include <iostream>
using namespace std; 
void registerStorageClass()
{ 
    register char b = 'G';
    cout << "Value of the variable 'b' declared as register: " << b;
}
int main()
{
    registerStorageClass();
    cout<<b;
    return 0;
}

********************************************************
*/
#include<iostream>
using namespace std;
int g,s;
void test_function()
{
    static int s;    //static variable, initially holds 0
    register int r;    //register variable
    r=5;
    s=s+r*2;
    cout<<"Inside test_function"<<endl;
    cout<<"g = "<<g<<endl;
}

int main()
{
	 test_function();
	cout<<s;
   	 return 0;
}

