// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    string str; cin >> str;
    int n = str.size();
    int len = abs(str[n-1] - str[0]);
    vector<pair<char, int>> vp;
    string nstr = "";
    char l = str[0], h = str[n-1];
    char start = min(l, h);
    char end = max(l, h);
    
    for(int i = 1; i < n-1; i++){
        if(str[i] <= end and str[i] >= start){
            vp.push_back(make_pair(str[i], i+1));
        }
    }



    if(l < h)
        sort(vp.begin(), vp.end());
    else
        sort(vp.rbegin(), vp.rend());

    cout << len << ' ' << vp.size()+2 << '\n';
    cout << 1 << ' ';
    for(auto it: vp){
        cout << it.second << ' ';
    }
    cout << n << '\n';

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