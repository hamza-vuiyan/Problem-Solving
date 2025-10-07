
// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';
#define cerrn		        cerr << '\n';

void solve(){
    int n; cin >> n;
    string str; cin >> str;
    vector<bool> removed(n+1);
    ll ans = 0;
    
    for(int i = 1; i <=n; i++){
            for(int j = i; j <=n; j+=i){
                if(str[j-1] == '1') break;
                if(removed[j]) continue;
                ans+=i;
                removed[j] = true;
            }
    }

    cout << ans << '\n';
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


