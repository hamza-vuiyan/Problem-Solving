// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n, k; cin >> n >> k;
    map<int, int> mp;
    vector<int> v(100001, 0);
    for(int i = 0; i < k; i++){
        int x, y; cin >> x >> y;
        mp[x]+=y;
    }
    vector<pair<int, int>> vp(mp.begin(), mp.end());    
    sort(vp.begin(), vp.end(), [](const auto &a, const auto &b){
        return a.second > b.second;
    });
    

    ll sum = 0;
    int m = 0;
    int l = mp.size();
    int q = min(n, l);
    while(q--){
        sum+=vp[m].second;
        m++;
    }
    cout << sum << '\n';
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