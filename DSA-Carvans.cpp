#include <iostream>
using namespace std;

int main() {
	int T_case,i,n,p;
	cin >> T_case;
        while(T_case--){
        cin >> n;
        int s[n],p=0;
        for(i=0;i<n;i++){
            cin >> s[i];
        }
         p=s[0];
         int c=1;
        for(i=1;i<n;i++){
          if(s[i] < p){
              p=s[i];
              c++;
          }
            
        }
        cout << c << "\n";
    }
	return 0;
}
