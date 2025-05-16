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
    string str; cin >> str;
    multiset<int> ms;

    for(auto it: str){
        ms.insert(it - '0');
    }

    for(int i = 9; i >= 0; i--){
        int x = *ms.lower_bound(i);
        cout << x;
        ms.erase(ms.lower_bound(i));
    }
    cout << '\n';
    
    
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