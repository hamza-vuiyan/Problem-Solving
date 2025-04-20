// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    string str; cin >> str;
    ll q; cin >> q;
    ll  n = str.size();
    vector<ll> prefixSum(n);

    prefixSum[0] = 0;
    ll sum = 0;
	for(ll i = 0; i < n-1; i++){
        if(str[i] == str[i+1]){
            sum+=1;
            prefixSum[i] = sum;
        }
        else
		    prefixSum[i] = sum;
	}
    prefixSum[n-1] = prefixSum[n-2];


	ll ans =  0;
	while(q--){
		ll l , r; cin >> l >> r;
		l--, r-=2;
		if(l == 0)
			ans = prefixSum[r];
		else
			ans = prefixSum[r] - prefixSum[l-1];
		cout << ans << '\n';
	}
    
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}