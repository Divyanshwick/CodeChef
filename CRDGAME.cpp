#include <iostream>
using namespace std;
#define ll long long int

int main() {
    int T,n,i;
    cin >> T;
    while(T--){
        int r;
        cin >> n;
        ll a,b;
        ll sum1=0,sum2=0;
        while(n--){
            ll fa=0,fb=0;
            cin >> a >> b;
            while(a != 0){
                r=a%10;
                fa+=r;
                a/=10;
            }
            while(b != 0){
                r=b%10;
                fb+=r;
                b/=10;
            }
            if(fa == fb){
                sum1++;
                sum2++;
            }
            else{
                if(fa > fb) sum1++;
                else sum2++;
            }
            
        }
         if(sum1 == sum2) cout << 2 << " " << sum1 << endl;
        else{
             if(sum1 > sum2) cout << 0 << " " << sum1 << endl;
             else cout << 1 << " " << sum2 << endl;
                
        }
    }
        
    return 0;
}
