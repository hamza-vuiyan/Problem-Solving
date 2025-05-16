// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define sort(x)             sort(x.begin(), x.end())
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';

void solve(){
    int n; cin >> n;
    vector<int> in(n);
    vector<int> out(n);

    for(auto &i: in) cin >> i;
    for(auto &i: out) cin >> i;

    int fine = 0;
    int j = 0;
    map<int, bool> exit;
    
    for(int i = 0; i < n , j < n; i++){
        int curr = in[i];

        if(exit[curr]) continue;

        while(out[j] != curr and j < n){
            exit[out[j]] = true;
            fine++;
            j++;
        }
        exit[curr] = true;
        j++;

    }

    cout << fine << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}