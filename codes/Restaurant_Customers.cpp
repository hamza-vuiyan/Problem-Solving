// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    
bool customSort(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first != b.first) 
        return a.first < b.first;  
    return a.second > b.second;
}


void solve(){
    int n; cin >> n;
    vector<pair<int, int>> vp;
    int x, y;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        vp.push_back({x, y});
    }
    sort(vp.begin(), vp.end(), customSort);

    int ans = 1;
    int  out = vp[0].second;

    int count = 1, k = 0;

    for(int i = 1; i < n; i++){
        if(vp[i].first <= out){
            ++count;
        }
        else{
            ans = max(ans, count);
            --count;
            out = vp[++k].second;
            i--;
        }
    }
    ans = max(ans, count);
    cout << ans << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}