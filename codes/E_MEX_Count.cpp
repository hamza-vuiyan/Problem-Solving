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

int findMex(map<int,int> mp, int n){
    for(int i = 0; i <= n+1; i++){
        if(!mp[i])
            return i;
    }
}

void solve(){
    int n; cin >> n;
    vector<int> v(n), ans;
    map<int, int> mp,mpOfmp;

    for(auto &i: v){
        cin >> i;
        mp[i]++;
    }
    
    int mex = findMex(mp, n);

    for(auto it: mp){
        if(it.first < mex) mpOfmp[it.second]++;
    }

    ans.push_back(1);
    for(int i = 1; i <= n-mex; i++){
        ans.push_back(ans[i-1] + mpOfmp[i]);
    }
    while (mex--){
        ans.push_back(mex+1);
    }

    for(auto it: ans){
        cout << it << ' ';
    }
    cout << '\n';
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