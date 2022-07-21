//Single Dimention
/*
#include <iostream>
using namespace std;
 
double getAverage(int arr[], int size) {
  int i, sum = 0;       
  double avg;        
	for (i = 0; i < size; ++i) {
      sum += arr[i];
   }
   avg = double(sum) / size;
   return avg;
}

int main () {
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;
	avg = getAverage( balance, 5 ) ;
   cout << "Average value is: " << avg << endl;     
   return 0;
}
*/
//multidimensional array
#include <iostream>
using namespace std;
void show(int arr[2][3]){
   int temp;
   for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
   }
}
int main(){
   int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7,8,9}};
   show(arr);
   return 0;
}
