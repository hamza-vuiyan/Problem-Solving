// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 

void solve(){
    string str; cin >> str;
    ll n  = str.size();
    if(str.find('0') == string::npos){
        cout << n*n << '\n';
        return;
    }

    ll mx = -1;
    ll count = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == '1'){
            count = 0;
            while(str[i] == '1' and  i < n){
                count++;
                i++;
            }
            mx = max(mx, count);
        }
    }

    ll l = 0, r = n-1;
    while(str[l] == '1')    l++;
    while(str[r] == '1')    r--;

    ll last = l + (n-1 - r);
    mx = max(mx, last);
    ll total = mx;
    ll k = total;
    ll m = 1, ans = 0; 
    while(total--){
        ans = max(ans, (k*m));
        k--, m++;
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