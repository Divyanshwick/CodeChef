#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t,n,s,v,i,p;
	cin >> t;
	while(t--){
	  cin >> n;
	  int *x=0;
	  int a[n]={0};
	 
	  for(i=0;i<n;i++){
	        cin >> s >> p >> v;
	     a[i]=(p/(s+1))*v;
	    }
	    x=std::max_element(a,a+n);
	   cout << (*x) << "\n";
	  }
   
	return 0;
}
