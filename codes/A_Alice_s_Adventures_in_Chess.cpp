// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n, a, b; cin >> n >> a >> b;
    string str; cin >> str;
    int x = 0, y = 0;
    int k = 0;
    int sz = str.size();
    while(k < 10000){
        for(int i = 0; i < sz; i++){
            if(str[i] == 'N')   y+=1;
            if(str[i] == 'E')   x+=1;
            if(str[i] == 'S')   y-=1;
            if(str[i] == 'W')   x-=1;
            if(x == a && y == b){
                cout << "YES\n";
                return;
            }
        }
        k++;
    }
    cout << "NO\n";
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