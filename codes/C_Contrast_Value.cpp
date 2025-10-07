
// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      	    long long
#define star    	    cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';
#define cerrn		    cerr << '\n';
#define ceil(x, y)          (x/y) + (x%y != 0)

void solve(){
    int n; cin >> n;
    vector<int> v(n);

    for(auto &i: v){
        cin >> i;
    }   
    if(v.size() == 1){
        cout << 1 << '\n';
        return;
    } 

    vector<int> ans;
    ans.push_back(v[0]);
    ans.push_back(v[1]);

    for(int i = 2; i < n; i++){
        int sz = ans.size();
        int firstDiff = ans[sz-2] - ans[sz-1];
        int secDiff = ans[sz-1] - v[i];
        
        if(firstDiff > 0){
            if(secDiff > 0) ans[sz-1] = v[i];
            else if (secDiff < 0) ans.push_back(v[i]);  
        }
        else{
            if(secDiff < 0) ans[sz-1] = v[i];
            else if(secDiff > 0) ans.push_back(v[i]);
        }
    }

    int fans = ans.size();
    if(ans[0] == ans[1]) --fans;
    cout << fans << '\n';
    
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    signed t; cin >> t;
    while(t--)  solve();
}