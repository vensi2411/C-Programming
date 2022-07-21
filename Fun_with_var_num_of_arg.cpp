#include <iostream>
#include <cstdarg>
#include <iomanip>
using namespace std;
/*double average(int num,...) {
   va_list valist;
   double sum = 0.0;
   int i;
   va_start(valist, num); //initialize valist for num number of arguments
   for (i = 0; i < num; i++) { //access all the arguments assigned to valist
      sum += va_arg(valist, int);
   }
   va_end(valist); //clean memory reserved for valist
   return sum/num;
}
int main() {
   cout << "Average of 2, 3, 4, 5 = "<< average(4, 2,3,4,5) << endl;
   cout << "Average of 5, 10, 15 = "<< average(3, 5,10,15)<< endl;
}*/
/* va_arg example */
#include <iostream>      
#include <stdarg.h>     /* va_list, va_start, va_arg, va_end */
void FindMax (int n, ...) // findmax(1,2,3) findmadL(3,4,5,6,7)
{
  int i,val;
  va_list vl;
  va_start(vl,n);
  for (i=0;i<n;i++)
  {
    val=va_arg(vl,int);
    cout<<val<<endl;
  }
  va_end(vl);
}
int main ()
{
  int m;
  FindMax (7,702,422,631,834,892,104,772,5.5,'a');
  FindMax (3,20,39,47);
  return 0;
}
