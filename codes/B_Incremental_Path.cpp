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

void solve(){
    int n, m; cin >> n >> m;
    string str; cin >> str;

    map<int, bool> mp;
    set<int> ans;

    vector<int> v(m);
    for(auto &i: v){
        cin >> i;
        mp[i] = true;
        ans.insert(i);
    }


    int pointer = 2;

    for(int i = 0; i < n; i++){
        if(str[i] == 'A'){
            ans.insert(pointer);
            pointer+=1;
        }else{
            while(mp[pointer]) pointer++;
            ans.insert(pointer);
            pointer++;
            while(mp[pointer]) pointer++;
            pointer++;
        }
    }

    cout << ans.size() << '\n';
    for(auto it: ans) cout << it << ' ';
    cout << '\n';

    
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    signed t; cin >> t;
    while(t--)  solve();
}