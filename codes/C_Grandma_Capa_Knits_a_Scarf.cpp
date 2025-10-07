// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';
#define cerrn		        cerr << '\n';

void solve(){
    int n; cin >> n;
    string str; cin >> str;
    int ans = INT_MAX;

    for(char i = 'a'; i <= 'z'; i++){
        
        int l = 0, r = n-1;
        int count = 0;
        bool f = true;

        while(l <= r){
            if(str[l] == str[r]){
                l++, r--;
            }
            else if(str[r] == i){
                count++;
                r--;
            }
            else if(str[l] == i){
                count++;
                l++;
            }
            else{
                f = false;
                break;
            }
            
        }
        if(f) ans = min(count, ans); 
    }

    if(ans == INT_MAX){
        cout << -1 << '\n';
        return;
    }

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