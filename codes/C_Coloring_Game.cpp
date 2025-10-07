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
    vector<int> v(n);
    for(auto &i: v) cin >> i;   
    reverse(all(v));
    
    ll totalComb = 0;

    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            int l = j+1, r = n-1;
            int ans = 0, range = 0;
            int f = false;
            while(l <= r){
                int mid = (l+r)/2;
                if(v[mid]+v[j] > v[i] and v[i]+v[j]+v[mid] > v[0]){
                    f = true;
                    ans = mid;
                    l = mid+1;
                }
                else r = mid-1;
            }
            if(f) range = ans-j;
            totalComb+=range;
        }
        
    }
    cout << totalComb << '\n';


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