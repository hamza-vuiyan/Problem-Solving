// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	ll n; cin >> n;
	vector<ll> v(n);
	for(auto &it: v){
		cin >> it;
	}
	multiset<ll> ms;
	ll power = 0;
	ll index = n;
	for(ll i = 0; i < n; i++){
		if(v[i] > 0){
			index = i;
			break;
		}
	}
	for(int i = index; i < n; i++){
		ms.insert(v[i]);
		if(v[i] == 0){
			auto it = prev(ms.end());
			if(!ms.empty()){
				power+=*it;
				ms.erase(it);
			}
		}
	}
	cout << power << '\n';
	ms.clear();
}

int main() {
	ll t; cin >> t;
	while(t--){
		solve();
	}
}