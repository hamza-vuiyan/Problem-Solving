// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n; cin >> n;
    string str;
    int val  = 0;
    while(n--){
        cin >> str;
        if(str == "++X") ++val;
        if(str == "X++") val++;
        if(str == "--X") --val;
        if(str == "X--") val--;
    }
    cout << val << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}