
#include <iostream>
using namespace std;
int n;
int & test() {
	return n;
}

int main() {
	test() = 5;
	cout<<n;
	return 0;
}
/*
#include<iostream>
using namespace std;
int c;
int & max(int &x, int &y) {
  if(x > y)
  	return x;
  else
    return y;
}

int main() {
   int a = 200, b = 100;
   //Works a as Normal Function
   c = max(a,b);
   cout << "\nValues a :"<<a<<" b:"<<b;
   cout << "\nMax Is:"<<c;
   //Works a as Return By Reference Function
   max(a,b) = 1000;
   cout << "\nValues a :"<<a<<" b:"<<b;   
   a = 50;
   b = 100;
   max(a,b) = 1000;
   cout << "\nValues a :"<<a<<" b:"<<b;   
}*/

/*
#include<iostream>
using namespace std;
 
int main()
{
  int x = 10; 
  // ref is a reference to x.
  int& ref = x; 
  // Value of x is now changed to 20
  ref = 40;
  cout << "x = " << x << endl ; 
  // Value of x is now changed to 30
  x = 30;
  cout << "ref = " << ref << endl ; 
  return 0;
}*/
