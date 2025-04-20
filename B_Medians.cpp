// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n, mid; cin >> n >> mid;

    ll left = mid-1;
    ll right = n -mid;
    if(n == 1){
        cout << 1 << '\n';
        cout << 1 << '\n';
    }
    else if(mid == 1 or mid == n) cout << -1 << '\n';
    else if(1&left && 1&right){
        cout << 3 << '\n';
        cout << 1 << ' ' << mid << ' ' << mid+1 << '\n';
    }
    else if(left%2 == 0 && right%2 == 0){
        cout << 3 << '\n';
        cout << 1 << ' ' << mid-1 << ' ' << mid+2 << '\n';
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