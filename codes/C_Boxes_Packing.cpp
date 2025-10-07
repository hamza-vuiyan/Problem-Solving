// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define star    		    cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
// #define sort(x)             sort(x.begin(), x.end())
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';
#define cerrn		        cerr << '\n';


void solve(){
    int n; cin >> n;
    vector<int> v(n);
    map<int,int, greater<int>> mp;
    for(auto &i: v){
        cin >> i;
        mp[i]++;
    } 
    int ans = -1;
    for(auto it: mp){
        ans = max(it.second, ans);
    }
    cout << ans << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}