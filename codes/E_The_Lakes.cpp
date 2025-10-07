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
ll arr[1001][1001];
map<pair<ll,ll>, bool> mp;


ll BFS(ll i, ll j, ll n, ll m){
    queue<pair<ll,ll>> qp;
    
    auto par = make_pair(i, j);
    qp.push(par);
    mp[par] = true;

    ll sum = 0;
    while(!qp.empty()){
        auto parr = qp.front();
        qp.pop();
        ll i = parr.first; ll j = parr.second;
        sum+=arr[i][j];
        if(j < m-1 and arr[i][j+1] > 0 and !mp[make_pair(i, j+1)]){
            qp.push(make_pair(i, j+1));
            mp[make_pair(i, j+1)] = true;
        }
        if(j > 0 and arr[i][j-1] > 0 and !mp[make_pair(i, j-1)]){
            qp.push(make_pair(i, j-1));
            mp[make_pair(i, j-1)] = true;
        }
        if(i < n-1 and arr[i+1][j] > 0 and !mp[make_pair(i+1, j)]){
            qp.push(make_pair(i+1, j));
            mp[make_pair(i+1, j)] = true;
        }
        if(i > 0 and arr[i-1][j] > 0 and !mp[make_pair(i-1, j)]){
            qp.push(make_pair(i-1, j));
            mp[make_pair(i-1, j)] = true;
        }

    }
    return sum;
}


void solve(){
    ll n, m; cin >> n >> m;

    ll ans = -1;

    for(ll i = 0; i < n; i++){  
        for(ll j= 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(ll i = 0; i < n; i++){  
        for(ll j= 0; j < m; j++){
            auto par = make_pair(i, j);
            if(arr[i][j] and !mp[par]){
                ll sum = BFS(i, j, n, m);
                ans = max(ans, sum);
            }
        }
    }

    cout << max((ll)0, ans) << '\n';
    mp.clear();
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