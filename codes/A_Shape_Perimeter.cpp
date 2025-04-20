// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n, m; cin >> n >> m;
    int x, y;
    vector<pair<int, int>> vp;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        vp.push_back({x, y});
    }

    int cx = vp[0].first+m, cy = vp[0].second+m;
    int tx = vp[0].first, ty = vp[0].second;

    int perimitar = 4*m;
    for(int i = 1; i < n; i++){
        perimitar+=(4*m);
        tx+=vp[i].first; ty+=vp[i].second;
        int h = cx - tx;
        int w = cy - ty;
        perimitar-=(2*(h+w));
        cx = tx+m;
        cy = ty+m;
    }
    cout << perimitar << '\n';

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