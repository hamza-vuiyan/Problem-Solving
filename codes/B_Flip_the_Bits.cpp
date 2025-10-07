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
    string a, b; cin >> a >> b;
    int co = 0, cz = 0;

    vector<pair<int, int>> vp;

    for(int i = 0; i < n; i++){
        if(a[i]== '1') co++; 
        else cz++;
        vp.push_back({co, cz}); 
    }

    int i = n-1;

    while(a[i] == b[i]){i--;}

    int flip = 0;
    int k = i;

    while(k >=0){
        if(vp[k].first != vp[k].second){
            cout << "NO\n";
            return;
        }
        else{
            flip++;
            if(flip&1){
                while(a[k]!=b[k] and k >= 0){
                    k--;
                }
            }
            else{
                 while(a[k] == b[k] and k >= 0){
                    k--;
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