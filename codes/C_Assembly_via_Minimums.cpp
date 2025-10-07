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
    int sz = (n*(n-1))/2;
    int arr[sz];
    map<int,int> mp;

    for(auto &i: arr){
        cin >> i;
        mp[i]++;
    }

    int ans[n];
    for(auto &it: ans) it = -1000000000;

    bool flag[n];
    for(auto &i: flag) i = false;

    for(auto it: mp){
        int groom = it.first;
        int seat = it.second;


        for(int i = 0; i < n; i++){
            
            if(flag[i] == false){
                if(seat >= (n-i-1) and seat > 0){
                    ans[i] = groom;
                    seat-=(n-i-1);
                    flag[i] = true;
                }
            }
        }
    }
    for(auto it: flag)
    for(int i = 0; i < n; i++){
        if(flag[i] == false) ans[i] = 1000000000;
    }
    for(auto it: ans){
        cout << it << ' ';
    }
    cout << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}