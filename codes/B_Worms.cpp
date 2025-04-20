// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n; cin >>  n;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;
    vector<ll> newV;
    newV.push_back(v[0]);
    for(int i = 1; i < n; i++){
        newV.push_back(newV[i-1]+v[i]);
    }
    int q; cin >> q;
    int x;
    while(q--){
        cin >> x;
        auto it = upper_bound(newV.begin(), newV.end(), x);
        int index = it-newV.begin();
        if(it  == newV.end())   index = n;
        else    newV[index-1] == x ? index:index++;
        cout << index << '\n';
    }

}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}