// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(auto &i: v) cin >> i;
    vector<int> match;
    int temp = n;
    int p = v[n-1];
    while(p--) match.push_back(temp);
    temp--;

    for(int i = n-1; i > 0; i--){
        int res = v[i-1] - v[i];
        while(res--){
            match.push_back(temp);
            if(match.size() > n){
                cout << "NO\n";
                return;
            }
        }
        temp--;
    }
    cout << (v == match ? "YES\n": "NO\n");
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}