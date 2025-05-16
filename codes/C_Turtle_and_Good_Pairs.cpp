// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define sort(x)             sort(x.begin(), x.end())
 

void solve(){
    int n; cin >> n;
    string str; cin >> str;

    int l = 0, r = n-1;
    
    sort(str);

    string ans = "";
    
    while(l < r){
        ans+=str[l];
        ans+=str[r];
        l++;r--;
    }
    if(n&1)ans+=str[l];
    cout << ans << '\n';
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--){
        solve();
    }
}