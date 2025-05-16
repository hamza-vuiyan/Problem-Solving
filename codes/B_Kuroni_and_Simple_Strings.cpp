// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    string str; cin >> str;
    vector<int> ans;
    
    int l = 0, r = str.size()-1;


    while(l < r){
        if(str[l] == '('){
            while(str[r] != ')' and r > l){
                r--;
            }
            if(r > l){
                ans.push_back(l+1);
                ans.push_back(r+1);
            }
            r--;
        }
        l++;
    }
    sort(ans.begin(), ans.end());
    
    if(ans.size() == 0){
        cout << 0 << '\n';
        return;
    }

    cout << 1 << '\n';
    cout << ans.size() << '\n';
    for(auto it: ans) cout << it << ' ';
    cout << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}