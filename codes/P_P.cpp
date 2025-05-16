// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    
void sieve(ll N, ll n){
    vector<bool> status(N+1, 0);
    
    for(ll i = 4; i <= N; i+=2) status[i] = 1;
    ll sqt = sqrt(N);
    for(ll i = 3; i <= sqt; i+=2){
        if(status[i] == 0){
            for(ll j = i*i; j <= N; j+=i){
                status[j] = 1;
            }
        }
    }
    int l = 4, r = n-4;
    while (status[l] == 0 or status[r] == 0){
        l++;
        r--;
    }
    cout << l << ' ' << r << '\n';
}

void solve(){
    ll n; cin >> n;
    sieve(1000000, n);
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}