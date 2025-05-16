// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n, t; cin >> n >> t;
    vector<ll> v(n);
    for(auto &i: v){
        cin >> i;
    }
    sort(v.begin(), v.end());
    ll sum = 0;
    ll count = 0;
    for(int i = 0; i < n; i++){
        if(sum+v[i] <= t){
            sum+=v[i];
            count++;
        }
    }
    cout << count << '\n';
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}