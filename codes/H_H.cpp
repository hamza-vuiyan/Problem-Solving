// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    ll cap = -1;
    ll a, b;
    ll in = 0;
    while(n--){
        cin >> a >> b;
        in-=a;
        in+=b;
        cap = max(cap, in);
    }
    cout << cap << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}