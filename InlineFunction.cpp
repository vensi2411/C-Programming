#include <iostream> 
using namespace std;
inline int min(int n1, int n2) 
{
return (n1 < n2)? n1 : n2;
}
int main() 
{
cout<<"Welcome to DataFlair tutorials!"<<endl<<endl;
cout << "The minimum number out of 37 and 73 is: "<< min(37,73)<<endl;
cout << "The minimum number out of 54 and 9 is: "<< min(54,9)<<endl;
cout << "The minimum number out of 131 and 14 is: "<< min(131,14)<<endl;
cout << "The minimum number out of 9 and 32 is: "<< min(9,32)<<endl;
return 0;
}
