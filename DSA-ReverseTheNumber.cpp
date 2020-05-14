#include <iostream>
using namespace std;

int main() {
	int n,i,a;
	cin >> n;
	for(i=0;i<n;i++){
	    a=0;
	    cin >> a;
	    int r=0,rev=0;
	    while(a != 0){
	        r=a%10;
	        rev=(rev*10)+r;
	        a/=10;
	    }
	    cout << rev << "\n";
	}
	
	return 0;
}
