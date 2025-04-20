// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n, l , r; cin >> n >> l >> r;

    vector<ll> v(n);
    for(auto &i: v) cin >> i;
    
    ll left = 0, right = 0;

    ll sum = 0;
    ll ans = 0;
    sum+=v[0];
    while(right < n){
        if(sum < l){
            sum+=v[++right];
        }
        else if(sum > r){
            sum-=v[left];
            left++;
            if(left > right){
                right++;
                sum+=v[left];
            }
        }
        else{
            ans++;
            left = right+1;
            right = left;
            sum = v[left];
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