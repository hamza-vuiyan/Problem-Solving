// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    map<ll, ll> mp;
    for(auto &i: v){
        cin >> i;
        mp[i]++;
    }
    ll count    = 0;
    for(auto it: mp){
        if(it.second == 1){
            count++;
        }
    }
    ll alicePoll = 0;
    alicePoll+=(count+1)/2;
    alicePoll*=2;
    for(auto it: mp){
        if(it.second == 1) continue;
        else{
            alicePoll+=1;
        }
    }
    cout << alicePoll << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--){
        solve();
    }
}