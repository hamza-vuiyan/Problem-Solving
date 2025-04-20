// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    string str1, str2, str3; cin >> str1 >> str2 >> str3;
    string part1  = str1+str2;
    sort(part1.begin(), part1.end());
    sort(str3.begin(), str3.end());
    cout << (part1 == str3 ? "YES\n":"NO\n");
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}