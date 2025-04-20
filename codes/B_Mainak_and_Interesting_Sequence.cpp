// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n, sum; cin >> n >> sum;
    if(n > sum){cout << "NO\n"; return;}
    if(sum%n == 0){
        cout << "YES\n";
        ll res = sum/n;
        for(int i= 0; i < n; i++){
            cout << res << ' ';
        }
        cout << '\n';
    }
    else{
        if(n&1){
            ll res = sum/n;
            cout << "YES\n";
            for(int i= 0; i < n-1; i++){
                cout << res << ' ';
            }
            cout << res+(sum%n) << '\n';
        }
        else{
            if(sum&1){
               cout << "NO\n"; 
            }
            else{
                ll res = sum/n;
                cout << "YES\n";
                for(int i= 0; i < n-2; i++){
                    cout << res << ' ';
                }
                cout << res+((sum%n)/2) << ' ' << res+((sum%n)/2)<< '\n';
            }
            
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