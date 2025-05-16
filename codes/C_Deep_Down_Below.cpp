// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << i << " = " << x << '\n';
#define sort(x)             sort(x.begin(), x.end())

#define cerrPair(x)         for(auto it: x) cerr << it.first << " " << it.second << '\n';

 
bool check(vector<pair<ll,ll>>& vp, ll l, ll r, ll mid){
    ll curpower = mid;
    for(int i = 0; i < vp.size(); i++){
        if(curpower < vp[i].first){
            return false;
        }
        else curpower+=vp[i].second;
    }
    return true;
}
       

void solve(){
    ll n; cin >> n;
    vector<pair<ll, ll>> vp;

    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        ll temp = x;
        ll mx = LLONG_MIN;

        for(ll f = 0; f < x; f++){
            ll k; cin >> k;
            k-=f;
            mx = max(mx, k);
        }
        vp.push_back({mx, x});
    }
    sort(vp);
    

    ll ans = LLONG_MAX;
    ll l = 0, r = LLONG_MAX;
    ll mid = l + ((r-l)/2);
   
    while (l <= r){
        ll mid = l + ((r-l)/2);
        bool f = check(vp, l, r, mid);
        if(f){
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    cout << ans+1 << '\n';


}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--){
        solve();
    }
}