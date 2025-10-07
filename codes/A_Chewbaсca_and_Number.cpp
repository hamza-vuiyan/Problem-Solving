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

void solve(){
    string str; cin >> str;
    
    int i = 0;
    if(str[0] == '9') i++;
    for( ; i <= str.size(); i++){
        int res = '9' - str[i] ;
        if(res < str[i]-'0') str[i] = '9' - str[i] + '0';
    }

    for(int i = 0; i < str.size(); i++){
        cout << str[i];
    }
    cout << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}