// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    int l = 0, r = n;
    if(n&1){
        vector<ll> v;
        ll temp = n;
        while(n > 0){
            v.push_back(n%10);
            n/=10;
        }
        reverse(v.begin(), v.end());
        ll x = 0, y = 0;
        bool f = true;
        for(int i = 0; i < v.size(); i++){
            if(v[i]&1){
                if(f){
                    x = (x*10)+(v[i]/2);
                    y = (y*10)+((v[i]/2)+1);
                    f = false;
                }
                else{
                    x = (x*10)+((v[i]/2)+1);
                    y = (y*10)+(v[i]/2);
                    f = true;
                } 
            }
            else{
                x = (x*10)+(v[i]/2);
                y = (y*10)+(v[i]/2);
            }
        }
        cout << x << ' ' << y << '\n';
    }
    else{
        ll res = (n/2);
        cout << res << ' ' << res << '\n';
    }
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