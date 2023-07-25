#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define V vector<long long int>
#define pb push_back
#define pi pair<long long int,long long int>
#define forl(var,str,end) for(long long int var=str; var<end; var++)

ll mod = 1000000007;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,q;
    	cin>>n>>q;
    	ll a[n];
    	forl(i,0,n)
    	cin>>a[i];
    	sort(a,a+n);
    	ll sum = 0;
    	V pos;
    	for(ll i=1; i<n-1; i++){
    		ll cnt = n-i;
    		ll num = (cnt*(cnt-1))/2;
    		sum += num;
    		pos.pb(sum);
		}
		while(q--){
			ll x;
			cin>>x;
			ll i = lower_bound(pos.begin(),pos.end(),x)-pos.begin();
			cout<<a[i]<<"\n";
		}
    }
    return 0;
}
