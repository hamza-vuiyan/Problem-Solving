// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';

void solve(){
    int n, k; cin >> n >> k;
    map<int, vector<int>> mp;
    for(int i = 1; i <=n; i++){
        int x; cin >> x;
        mp[x].push_back(i);
    }

    vector<pair<int, vector<int>>> vp(mp.begin(), mp.end());


    int ans = INT32_MAX;

    for(int i = 0; i < vp.size(); i++){
        int key = vp[i].first;
        vector<int> temp;
        for(int val: vp[i].second){
            temp.push_back(val);
        }

        vector<int> diff;

        diff.push_back(temp[0]);
        for(int i = 1; i < temp.size(); i++){
            diff.push_back(temp[i]-temp[i-1]);
        }
        diff.push_back(n+1 - temp[temp.size()-1]);

        sort(rall(diff));
        int first = (diff[0]+1)/2;
        int snd = diff[1];
        int tres = max(first, snd);
        
        ans = min(ans, tres);
        temp.clear();
        diff.clear();
    }

    cout << --ans << '\n';

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