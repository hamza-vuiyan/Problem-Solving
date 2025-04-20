// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n; cin >> n;
    vector<ll> v(n+1);
    for(int i = 1; i <=n; i++){
        cin >> v[i];
    }
    string str; cin >> str;
    vector<bool> visited(n+1);
    map<int, int> mp;

    for(int i = 1; i  <=n; i++){
        if(visited[i] == true) continue;
        else{
            int black = 0;
            set<int> st;
            while(visited[i] == false){
                st.insert(v[i]);
                if(str[i-1] == '0') black++; 
                visited[i] = true;
                i = v[i];
            }
            for(auto it: st) mp[it] = black;
            st.clear();
        }
    }
    for(int i = 1; i <=n ; i++){
        cout << mp[i] << ' ';
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