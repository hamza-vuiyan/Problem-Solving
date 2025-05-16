// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define sort(x)             sort(x.begin(), x.end())
 

void solve(int t){
	ll n, q; cin >> n >> q;
	vector<ll> v(n);
	for(auto &i: v) cin >> i;

	while(q--){
		ll l, r; cin >> l >> r;
		ll left = 0, right = n-1;

		auto up = upper_bound(v.begin(), v.end(), r);
		
		if(up == v.end()) right = n-1;
		else right = (up - v.begin())-1;

		auto low = lower_bound(v.begin(), v.end(), l);

		left = low - v.begin();

		cout << (right - left + 1) << '\n';

	}
}

int main(){
    std::ios::sync_with_stdio(true);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    for(int i = 1; i <=t; i++){
		cout << "Case " << i <<":\n";
        solve(t);
    }
}