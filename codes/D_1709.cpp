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


void sortIt(vector<int>& v , vector<pair<int,int>>& ans, int n, int o){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
                ans.push_back({o, j+1});
            }
        }
    }
}

void solve(){
    int n; cin >> n;
    vector<int> v1(n), v2(n);
    vector<pair<int, int>> ans;

    for(auto &i: v1) cin >> i;
    for(auto &i: v2) cin >> i;

    sortIt(v1, ans, n, 1);
    sortIt(v2, ans, n, 2);

    for(int i = 0; i < n; i++){
        if(v1[i] > v2[i]){
            swap(v1[i], v2[i]);
            ans.push_back({3, i+1});
        }
    }


    cout << ans.size() << '\n';
    for(auto it: ans){
        cout << it.first << ' ' << it.second << '\n';
    }
 
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