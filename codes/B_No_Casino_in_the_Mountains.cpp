// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      	    long long
#define star    	    cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';
#define cerrn		    cerr << '\n';
#define ceil(x, y)          (x/y) + (x%y != 0)

void solve(){
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(auto &i: v) cin >> i;
//ff
    int ans = 0;

    for(int i = 0; i < n; i++){
        int count = 0;
        while(v[i]==0 and i < n){
            i++;
            count++;
            if(count == k){
                ans++; i++;
                count = 0;
            }
        }
    }

    cout << ans << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    signed t; cin >> t;
    while(t--)  solve();
}