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
    int n; cin >> n;
    int bob = 0, al = 0;
    map<int, int> mp;
    for(int i = 0; i < n-1; i++){
        if(mp[i]) continue;
        for(int j = i+1; j < n; j++){
            if(mp[j]) continue;
            if((i+j)%4 == 3){
                if(!mp[j] and !mp[i]){
                    mp[j]++;
                    mp[i]++;
                    bob++;
                    break;
                }
            }
        }
    }
    al = (n - (bob*2));
    if(al){
        cout << "Alice\n";
    }
    else{
        cout << "Bob\n";
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