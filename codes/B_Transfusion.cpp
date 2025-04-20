// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    for(auto &i: v){
        cin >> i;
        sum += i;
    } 
    if(sum%n > 0){
        cout << "NO\n";
        return;
    }
    ll target = sum / n;
    for(int i = 0; i < n-2; i++){
        if(v[i] < target){
            v[i+2]-=(target-v[i]);
            v[i] = target;
        }
        else if(v[i] > target){
            v[i+2]+= (v[i] - target);
            v[i] = target;
        }
    }
    for(int i = 0; i < n-1; i++){
        if(v[i] == v[i+1]) continue;
        else{
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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