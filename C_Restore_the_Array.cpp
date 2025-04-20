// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n; cin >> n;
    vector<int> v(n-1);
    for(auto &i: v) cin >> i;
    
    vector<int> nv;
    nv.push_back(v[0]);
    for(int i = 1; i < n-1; i++){
        nv.push_back(min(v[i], v[i-1]));
    }
    nv.push_back(v[n-2]);
    for(auto it: nv) cout << it << ' ';
    cout << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}