// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    string str; cin >> str;
    int n = str.size();

    for(int i = 1; i < n; i++){
        if(str[i-1] == str[i]){
            cout << 1 << '\n';
            return;
        }
    }

    cout << n << '\n';
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