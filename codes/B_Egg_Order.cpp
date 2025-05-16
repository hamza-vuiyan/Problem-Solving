// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n, k; cin >> n >> k;
    ll rev = (n-k);
    while(rev--){
        cout << n << ' ';
        n--;
    }
    for(ll i = 1; i <=k; i++){
        cout << i << ' ';
    }
    cout << '\n';
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}