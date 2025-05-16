// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    string str; cin >> str;
    ll sev = 0;
    ll four = 0;
    ll sz = str.size();
    for(int i = 0; i < sz; i++){
        if(str[i] == '7') sev++;
        if(str[i] == '4') four++;
    }

    ll total = sev+four;
    if(total == 0){
         cout << "NO\n";
        return;
    }
    while(total > 0){
        int rem = total%10;
        if(rem == 7 or rem == 4){
            total/=10;
        }
        else{
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}