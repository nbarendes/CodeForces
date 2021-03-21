#include <iostream>
using namespace std;
#include <bits/stdc++.h>
 
 
int main() {
	// your code goes here
	int t, n, m, r ,c;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m>>r>>c;
	    cout<<max(r - 1, n - r) + max(c - 1, m-c)<<endl;
	}
	return 0;
}