// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(auto &i: v) cin >> i;
    int count = 1, one =  0;
    int ans = -1;
    v[0] == 1 ? one++:one;
    for(int i = 1; i < n; i++){
        if(v[i] == 1) one++;
        if(v[i] == v[i-1] && v[i] == 0){
            count++;
        }
        else{
            ans = max(ans, count);
            count = 1;
        }
    }
    cout << ans+one << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}


