#include <iostream>
using namespace std;
int sum(int a, int b=20, int c=30)
{
   int z;
   z = a+b+c;
   return z;
}

int main(){
   cout<<sum(1)<<endl;
   cout<<sum(1, 2)<<endl;
   cout<<sum(1, 2, 3)<<endl;
   return 0;
}

