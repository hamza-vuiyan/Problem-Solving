// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define cerr(x)             cerr << x << '\n';
#define sort(x)             sort(x.begin(), x.end())
 

void solve(){
    int c, a, b, x; cin >> c >> a >> b >> x;
    int ans = 0;
    int mn = min(a, b);
    int bg = max(a, b);

    if(c == 0){
        cout << min(1, max(bg, x)) << '\n';
        return;
    } 

    ans+=c;
    ans+=(mn*2);

    a-=mn;
    b-=mn;
    

    if(max(a+x, b+x) > c) ans+=(c+1);

    else ans+=(max(a+x, b+x));
    

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