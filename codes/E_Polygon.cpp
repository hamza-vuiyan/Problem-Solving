// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';

void solve(){

    int n; cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        string str; cin >> str;  
        for(int j= 0; j < n; j++){
            arr[i][j] = str[j]-'0';
        }
    }

    for(int i = 0; i < n; i++){  
        for(int j= 0; j < n; j++){
            if(arr[i][j] == 1){
                if(i == n-1 or j == n-1) continue;
                bool f = arr[i][j+1] == 1 ? false:true;
                bool f2 = arr[i+1][j] == 1 ? false:true;

                if(f and f2){
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";


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