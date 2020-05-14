#include <iostream>
using namespace std;

int main() {
   int n,laddu=0,r,T;
      string s1,s2;
  cin >> T;
  while(T--){
      cin >> n >> s1;
      while(n--){
          cin >> s2;
          if(s2 == "CONTEST_WON"){
              cin >> r;
              if(r > 20) laddu+=300;
               else laddu+=300+(20-r);
          
        }
        else if(s2 == "TOP_CONTRIBUTOR") laddu+=300;
        
        else if(s2 == "BUG_FOUND"){
            cin >> r;
            laddu+=r;
            
        }
            else if(s2 == "CONTEST_HOSTED") laddu+=50;
            
        
      }
      if(s1 == "INDIAN") cout << laddu/200 << "\n";
      else cout << laddu/400 << "\n";
      	
      	laddu =0;
  }

	return 0;
}
