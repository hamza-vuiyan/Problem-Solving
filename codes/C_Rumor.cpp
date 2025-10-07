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
vector<bool> visited(100001);

ll BFS(ll source, vector<vector<ll>>& adj, vector<ll>& v){
    queue<ll> q;
    q.push(source);
    ll mn = LONG_LONG_MAX;
    mn = min(v[source-1], mn);

    visited[source] = true;
    while(!q.empty()){
        ll val = q.front();
        q.pop();
        for(auto it: adj[val]){
            if(!visited[it]){
                visited[it] = true;

                mn = min(mn, v[it-1]);
                q.push(it);
            }
        }
    }

    return mn;
}

void solve(){
    ll n, m; cin >> n >> m;
    ll allsum = 0;
    ll ans = 0;

    vector<ll> v(n);
    for(auto &i: v){
        cin >> i;
        allsum+=i;
    }
    vector<vector<ll>> adj(n+1);

    while(m--){
        ll x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for(ll i = 1; i <= n; i++){
        if(!visited[i]){
            ll s = BFS(i, adj, v);
            ans+=s;
        }
    }
    cout << ans << '\n';


}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}