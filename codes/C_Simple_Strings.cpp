// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define sort(x)             sort(x.begin(), x.end())
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';

void solve(){
    string str; cin >> str;
    int n = str.size();

    for(int i = 0; i < n-2; i++){
        if(str[i] == str[i+1]){
           while(str[i+1] == str[i] or str[i+1] == str[i+2]){
             if(str[i+1]+1 > 'z') str[i+1] = 'a';
             else str[i+1] = (str[i+1]+1);
           }
        }
    }

    if(str[n-1] == str[n-2]) str[n-1] = str[n-2]+1;
    if(str[n-1] > 'z') str[n-1] = 'a';


    cout << str << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}