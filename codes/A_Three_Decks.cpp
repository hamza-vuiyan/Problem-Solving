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
    int a, b, c; cin >> a >> b >> c;
    int res = (a+b+c)/3;

    if((a+b+c)%3){
        cout << "NO\n";
        return;
    }
    else if(a > res or b > res){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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