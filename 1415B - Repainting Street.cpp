#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long ll;
 
 
int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long t, n, k;
	cin>>t;
	int count = 0;
	while(t--)
	{
	    cin>>n>>k;
	    vector<ll> c(n);
	    set<ll>st;
	    
	    for (int i = 0; i < n; i++)
	    {
	        cin>> c[i];
	        st.insert(c[i]);
 
	    }
	    ll ans  = 1e12;
	    for(auto x : st)
	    {
	        ll cnt = 0, chk=x, j=0;
	        while(j<n)
	        {
	            if(c[j]==chk)
	            {
	                j++;
	                continue;
	            }else
	            {
	                cnt++;
	                j+=k;
	            }
	            
	        }
	        ans=min(ans, cnt);
	        
	    }
	    cout<<ans<<'\n';
	    
	}
	return 0;
}