// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n, m; cin >> n >> m;
    string str;
    ll len = 0;
    ll count = 0;
    while(n--){
        cin >> str;
        len+=str.size();
        if(len <= m){
            count++;
        }
    }
    cout << count << '\n';
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