// In The Name of Almighty Allah

#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

#define ll      			long long
#define star    			cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';

void solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    ll yassir = 0;
    for(auto &i: v){ cin >> i; yassir+=i;}

    ll maxSum = 0;
    ll sum = 0;

    ll count =  0;
    ll maxEndingHere = v[0];
    ll maxSoFar = v[0];

    for (int i = 1; i < v.size(); ++i) {
        maxEndingHere = max(v[i], maxEndingHere + v[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    cerr << maxSoFar << '\n';

    

    for(ll i = 0; i < n; i++){
        sum+=v[i];
        if(maxSum >= yassir && count < n){
            cout << "NO\n";
            return;
        }
        if(sum <= 0){
            sum = 0;
            count = 0;
            continue;
        }
        else{
            maxSum = max(maxSum, sum);
        }
        count++;
    }


    if(maxSum >= yassir && count < n){
            cout << "NO\n";
    }
    else  cout << "YES\n";

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