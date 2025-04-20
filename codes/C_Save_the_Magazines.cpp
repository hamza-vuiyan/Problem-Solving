// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    string str; cin >> str;

    vector<ll> v(n);
    for(auto &i: v) cin >> i;
    ll sum = 0;
    ll i = 0;

    while(str[i] == '1'){
        sum+=v[i];
        i++;
    }
    
    for(ll j = i; j < n-1; j++){
        bool f = false;
        if(str[j] == '0' and str[j+1] == '1'){
            ll mn = v[j];  f = true;
            sum+=v[j++];
            while(str[j] != '0' and j < n){
                sum+=v[j];
                mn = min(mn, v[j]);
                j++;
            }
            sum-=mn;
        }
        if(f) j--;
    }
    cout << sum << '\n';
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