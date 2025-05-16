// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      	long long
#define star    	cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';

void solve(){
    int n; cin >> n;

    vector<vector<int>> v;

    map<int, int> mp;
    set<int> st;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        vector<int> temp;
        for(int i = 0; i < x; i++){
            int y; cin >> y;
            st.insert(y);
            mp[y]++;
            temp.push_back(y);
        }
        v.push_back(temp);
        temp.clear();
    }

    map<int, int> all;

    for(auto it: st) all[it]++;


 for(auto it: v){
    bool f = true;
    for(int val: it){
        if(mp[val] == 1 and all[val] == 1){
                f = false;
                break;
            }
        }
        if(f){
            cout << "Yes\n";
                return;
        }
    }
    cout << "No\n";
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