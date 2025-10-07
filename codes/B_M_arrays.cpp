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
    int n , k; cin >> n >> k;
    vector<int> v(n);
    map<int,int> mp;
    vector<bool> visited(100001);
    
    for(auto &i: v){ cin >> i; mp[i%k]++;}

    int ans = 0;
    for(auto it: mp){
        if(it.first == 0) ans++;
        else if(k%2 == 0 and it.first == k/2) ans++;
        else{
            
            int partyA = it.first;
            int need = k - partyA;

            if(visited[partyA] or visited[need]) continue;

            ans++;
            int extra = (max(mp[partyA], mp[need]) - min(mp[partyA], mp[need]) -1);
            
            if(extra > 0) ans+=extra;
            visited[partyA] = true;
            visited[need] = true;
        }
    }

    cout << ans << '\n';


}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    signed t; cin >> t;
    while(t--)  solve();
}