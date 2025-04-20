// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    for(auto &i: v) cin >> i;
    int zero = 0;
    int three = 0;
    int  two = 0;
    int  one = 0;
    int five = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 0) zero++;
        else if (v[i] == 1) one++;
        else if(v[i] ==2) two++;
        else if(v[i] == 3) three++;
        else if(v[i] == 5) five++;
        if(zero >=3 and one >=1 and three >= 1 and two >= 2 and five >=1){
            cout << i+1 << '\n';
            return;
        }
    }
    cout << 0 << '\n';
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