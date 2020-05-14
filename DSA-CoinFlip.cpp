#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int G,I,N,Q;
	    cin >> G;
	    while(G--){
	        int c=0;
	        cin >> I >> N >> Q;
	        if(I == 1){
	            if(N%2 != 0){
	                if(Q == 1){
	                    c = N/2;
	                }
	                else{
	                    c = (N+1)/2;
	                }
	            }
	            else{
	                c = N/2;
	            }
	           
	        }
	         else if(I == 2){
	            if(N%2 != 0){
	                if(Q == 2){
	                    c = N/2;
	                }
	                else{
	                    c = (N+1)/2;
	                }
	            }
	            else{
	                c = N/2;
	            }
	        }
	        cout << c << "\n";
	    }
	    
	}
	
	
	return 0;
}
