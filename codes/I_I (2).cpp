// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll tot; cin >> tot;
    if(tot&1){
        ll n = tot/2;
        ll even = (n*((2*2) + ((n-1) * 2)))/2;    
        ++n;
        ll odd = (n*(2+((n-1)*2)))/2;
        cout << even - odd << '\n';
    }
    else{
        ll n = tot/2;
        ll even = (n*((2*2) + ((n-1) * 2)))/2;    
        ll odd = (n*(2+((n-1)*2)))/2;
        cout << even - odd << '\n';
    }
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}