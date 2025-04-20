// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    if(n == 1 or n == 3){
        cout << -1 << '\n';
        return;
    }
    else{
        if(n&1){
            string str = "";
            for(int i = 0; i < (n-4); i++){
                str+='3';
            }
            str+=("6366");
            cout << str << '\n';
        }
        else{
            string str = "";
            for(int i = 0; i < (n-2); i++){
                str+='3';
            }
            str+=("66");
            cout << str << '\n';
        }
    }
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