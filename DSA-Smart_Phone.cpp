#include<bits/stdc++.h>
using namespace std;

int main() {
	long long T;
	cin >> T;
	
	long long a[T];
	for(long long i=0; i<T; i++)
	{
	    cin >> a[i];
	}
	sort(a, a+T);
	
	long long pr, rev;
	long long b[T];
	for(long long i=T-1, j=0; i>=0, j<T; i--, j++)
	{
	   pr = a[i];
	   rev = pr * (T-i);
	   b[i] = rev;
	}
	
	sort(b, b+T);
	cout << b[T-1];
	
	return 0;
}
