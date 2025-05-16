// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;

    string str; cin >> str;
    string prv = str;
    ll cnt = 1;
    bool f;
    while(--n){
        cin >> str;
        if(str == prv){
            prv = str;
        }
        else{
            cnt++;
            prv = str;
        }
    }
    cout  << cnt << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}