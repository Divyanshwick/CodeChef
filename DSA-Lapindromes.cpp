#include <iostream>
using namespace std;

int main() {
int T_case,i;
cin >> T_case;
while(T_case--){
    string str;
    cin >> str;
    int n=str.length();
    int a[26][2]={0,0};
    for(i=0;i<n/2;i++){
        a[str[i] - 97][0]++;
    }
    for(i=(n+1)/2;i<n;i++){
        a[str[i] - 97][1]++;
    }    
    int cnt=0;
    for(i=0;i<26;i++){
        if(a[i][0] != a[i][1]){
            cnt=1;
            break;
        }
    }
    if(cnt == 0){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
    
    
    
}
   
	    
	return 0;
}
