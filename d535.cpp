#include <iostream>
using namespace std;
int main(){
 	char x[31];
	while ( cin >> x ){
		//條件1(不用)
		//條件2
		int s = 1, m;
		for(int t = 0 ; t < 31 ; t ++){
		  if ( x[t] == 0 && s == 1 ){
		     s = 0;
		     m = t;
		  }
		}
		s = 1;
		for(int t = 0 ; t < (m + 1) / 2 ; t ++){
		  if( x[t] != x[m - 1 - t] ){
		    cout << "INCORRECT";
		    s = 0;
			continue;
		  }
		}
		if ( s == 0 ){
			continue;
		}
		//條件3
		for( int t = 0 ; t < m - 1 ; t ++ ){
		if( x[t + 1] - '0' > (x[t] - '0') * 2){
		    cout << "INCORRECT";
		    s = 0;
			continue;
		  }
		}
		if ( s == 0 ){
			continue;
		}
		//輸出
		s = 1;
		for( int t = 0 ; t < m ; t ++ ){
		  if( x[t] % 2 == 0 ){
			  cout << x[t];
		    s = 0;
		  }
		}
		if(s == 1){
			cout << "0";
		}
	}
}
