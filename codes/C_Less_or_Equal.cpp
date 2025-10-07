// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define star    		    cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define sort(x)             sort(x.begin(), x.end())
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';
#define cerrn		        cerr << '\n';


void solve(){
    int n, k; cin >> n >> k;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    int count = 0;
    if(k == 0){
        if(mp[1]){
            cout << -1 << '\n';
        }
        else cout << 1 << '\n';
        return;
    }

    for(auto it: mp){
        count+=it.second;
        if(count < k) continue;
        else{
            if(count == k) {
                if(it.first > 1e9){
                    cout << -1 << '\n';
                }
                else cout << it.first << '\n';
            }
            else cout << -1 << '\n';
            return; 
        }
    }
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}