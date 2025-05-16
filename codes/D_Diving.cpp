// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define sort(x)             sort(x.begin(), x.end())
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';

void solve(){
    int a, b; cin >> a >> b;
    vector<bool> binA(20);
    vector<bool> binB(20);

    for(int i = 0; i < 20; i++){
        binA[i] = ((a>>i)&1); 
    }
    for(int i = 0; i < 20; i++){
        binB[i] = ((b>>i)&1); 
    }
    reverse(binA.begin(), binA.end());
    reverse(binB.begin(), binB.end());
    
    for(int i = 19; i >=0; i--){
        if(binA[i]&binB[i]){
            cout << "Yes\n";
            return;
        }
    }

    cout << "No\n";

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