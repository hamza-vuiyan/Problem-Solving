
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


int bins(vector<int>& pre, int i, int k){
   
    int l = i;
    int r = pre.size()-1;

    int ans = 0;
    bool f = false;

    while (l <= r)
    {
        int mid = (l+r)/2;

        int sum = pre[mid] - (i > 0 ? pre[i-1]:0);
        if(sum == k){
            ans = mid;
            l = mid+1;
            f = true;
        } 
        else if(sum > k) r = mid-1;
        else l = mid+1;

    }
    if(f) return (pre.size()- (ans+1));
    else return -1;
}


void solve(){
    int n , k; cin >> n >> k;
    vector<int> v(n);
    int sum = 0;
    vector<int> prefix(n);

    for(int i = 0; i < n; i++ ){
        cin >> v[i];
        sum+=v[i];
    }

    prefix[0] = v[0];

    for(int i = 1; i < n; i++){
        prefix[i] = v[i]+prefix[i-1];
    }

    if(sum < k){
        cout << -1 << '\n';
        return;
    }
    if(sum == k){
        cout << 0 << '\n';
        return;
    }


    int ans = INT_MAX;

    for(int i = 0; i < n; i++){
        int tt = bins(prefix, i, k);
        tt+=i;
        if(tt == -1) break;

        ans = min(ans, tt);
    }

    cout << ans << '\n';
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