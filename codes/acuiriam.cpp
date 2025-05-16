// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
	

void solve(){
	ll n, tank; cin >> n >> tank;
	vector<ll> v(n);
	for(auto &i: v) cin >> i;
	sort(v.begin(), v.end());

	ll height = v[0];
	ll maxheight = v[n-1];
	for(ll i = 0; i < n; i++){
		if(i == n-1){
			ll d = (tank/(i+1));
			height+=d;
			break;			
		}
		else{
			if(v[i] == v[i+1]){
				continue;
			}
			else{
				ll need = (v[i+1] - v[i])*(i+1);
				if(need <= tank){
					tank-=need;
					height+=(v[i+1] - v[i]);
				}
				else{
					ll inc = tank/(i+1);
					height+=inc;
					break;
				}
			}
		}
		
	}
	cout << height << '\n';
}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	ll t;
	cin >> t;
	while (t--){
		solve();
	}
}
