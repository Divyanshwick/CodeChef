#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int T;
    cin >> T;
    long int n,i;
    while(T--){
        long int sum=0;
        cin >> n;
        long int arr[n] = {0};
        
        for(i=0;i<n;cin >> arr[i++]);
        
        for(i=0;i<n-1;i++) sum+=(abs(arr[i+1]-arr[i])-1);
        
        cout << sum << endl;
        
    }
	
	return 0;
}
