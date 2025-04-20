// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n, k; cin >> n >> k;
    ll arr[n][n];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){ 
            cin >> arr[i][j];
        }
    }
    ll newArr[n][n];
    for(ll i = n-1, m = 0; i >= 0, m < n; i--, m++){
      for(ll j = n-1, k = 0; j >= 0, k < n; j--, k++){
            newArr[m][k] = arr[i][j];
        }
    }
    ll count = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            if(arr[i][j] == newArr[i][j]) continue;
            count++;
        }
    }
    if ((count/2) > k) cout << "NO\n";
    else{
        if(1&n) cout << "YES\n";
        else{
            if(1&((k - (count/2)))){
                cout << "NO\n";
            }
            else{
                cout << "YES\n";
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