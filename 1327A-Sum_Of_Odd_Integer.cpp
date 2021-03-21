#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;
typedef long long ll;

const int maxn=1e5+5;

int main()
{
    int t;
    ll n,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&k);
        k*=k;
        if(n<k||(n-k)&1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}

