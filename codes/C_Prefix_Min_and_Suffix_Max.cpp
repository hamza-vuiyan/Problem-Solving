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
    vector<int> v(n), sm(n), bg(n);
    for(auto &i: v){
        cin >> i;
    }
    int mn = v[0];
    int mx = v[n-1];
    for(int i = 0; i < n; i++){
        if(v[i] >= mn){
            sm[i] = mn;
        }
        else{
            sm[i] = v[i];
            mn = v[i];
        }
    }

    for(int i = n-1; i >= 0; i--){
        if(v[i] <= mx){
            bg[i] = mx;
        }
        else{
            bg[i] = v[i];
            mx = v[i];
        }
    }
    string ans = "1";
    for(int i = 1; i < n-1; i++){
        if(v[i] == sm[i] or v[i] == bg[i]){
            ans+='1';
        }
        else ans+='0';
    }
    ans+='1';
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