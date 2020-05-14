#include <iostream>
using namespace std;

int main() {
  int a[1000],i,j;
  for(i=0;i<1000;i++){
      cin >> a[i];
      if(a[i] == 42){
          j=i;
          break;
      }
      
  }
  for(i=0;i<j;i++){
      cout << a[i] << "\n";
  }
  
  
	return 0;
}
