// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    string str; cin >> str;

    int ans = 1;
    if(str[0] == '1') ans++;
    
    for(int i = 1; i < n; i++){
        if(str[i] == str[i-1]) ans++;
        else ans+=2;
    }
    bool f1 = false, f2 = false;
    for(int i = 0; i < n; i++){
        if(str[i] == '1' and str[i+1]=='0'){
            i+=2;
            f1 = true;
            while( i < n){
                if(str[i] == '1'){
                    f2 = true;
                    break;
                }
                i++;
            }
        }
    }
    if(f1 and f2) ans-=2;
    else if(f1 or f2) ans--;

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