// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv(x)				for(auto it: x){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n, q; cin >> n >> q;
    string str1, str2; cin >> str1 >> str2;

    vector<vector<int>> fstr(n+1, vector<int>(26, 0));
    vector<vector<int>> fstr2(n+1, vector<int>(26, 0));

    for(int i = 1; i < n+1; i++){
        fstr[i] = fstr[i-1];
        fstr[i][str1[i-1]-'a']++;
    }


    for(int i = 1; i < n+1; i++){
        fstr2[i] = fstr2[i-1];
        fstr2[i][str2[i-1]-'a']++;
    }


    while(q--){
        int l, r; cin >> l >> r;
        ll ans = 0;
        for(int i = 0; i < 26; i++){
            int cnt1 = fstr[r][i] - fstr[l-1][i];
            int cnt2 = fstr2[r][i] - fstr2[l-1][i];
            ans+=abs(cnt1-cnt2);

        }
        cout << ans/2 << '\n';
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