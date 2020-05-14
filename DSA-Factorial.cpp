#include <iostream>
using namespace std;
typedef long long ll;
int main(){
int T_case;
cin >> T_case;
while(T_case--){
    ll n;
    cin >> n;
    
    ll cnt=0;
    int d=5;
    
    while(n >= d){
        cnt+=(n/d);
        d*=5;
    }
    
    cout << cnt << "\n";
    
}
	return 0;
}
