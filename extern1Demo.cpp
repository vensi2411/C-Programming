#include <iostream>
using namespace std;
#include "extern2.cpp"
extern void write_extern(); 
main()
{
   write_extern();
}


/*

int x;
void externStorageClass()
{
     extern int x;
     cout << "Value of the variable 'x'"<< x << "\n";
     x = 2;
     cout<< "Modified value of the variable 'x'"<< x<<endl;
}
int main()
{
    externStorageClass() ;
    cout<<x;
    return 0;
}*/
 
