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
    set<int> mainDivs;

    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            mainDivs.insert(i);
            mainDivs.insert(n/i);
        }
    }
    
    vector<int> divs(all(mainDivs));


    int m = divs.size();

    for(int i = m-1; i >=0 ; i--){

        int a = n/divs[i];
        int willBeBroken = divs[i];
        

        set<int> tmp;
        for(int j = 2; j*j <= divs[i]; j++){
            if(divs[i]%j == 0){
                tmp.insert(divs[i]/j);
                tmp.insert(j);
            }
        }

        for(auto it: tmp){
            if(it == a) continue;

            int b = willBeBroken/it;
            if(b != it and b != a){
                cout <<"YES\n";
                cout << a << ' ' << b << ' ' << it << '\n';
                return;
            }
        }
    }
    cout << "NO\n";

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