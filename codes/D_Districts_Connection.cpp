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

vector<pair<int,int>> vp;
vector<bool> freq(5001);

void BFS(vector<vector<int>>& adj, int n){
    queue<int> q;
    q.push(1);
    freq[1] = true;

    while(!q.empty()){
        int val = q.front();
        q.pop();
        for(auto it: adj[val]){
            if(!freq[it]){
                q.push(it);
                freq[it] = true;
                vp.push_back({val, it});
            }
        }
    }
    
    if(vp.size() == n-1){
        cout << "YES\n";
        for(auto it: vp){
            cout << it.first << ' ' << it.second << '\n';
        }
    }
    else cout << "NO" << '\n';
    return;
}

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    freq.assign(n+1, false);

    vector<vector<int>> adj(n+1);

    for(auto &i: v) cin >> i;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(v[i]!=v[j]){
                adj[i+1].push_back(j+1);
            }
        }
    }

    BFS(adj, n);
    adj.clear();
    return;
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    signed t; cin >> t;
    while(t--){
        vp.clear();
        solve();
    
    }
}