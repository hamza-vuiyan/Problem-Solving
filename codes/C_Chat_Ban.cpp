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


ll check(ll mid, ll l, ll r, ll k){
    ll sum = 0;

    if(mid <= k){
        sum = (mid*(mid+1)/2);
        return sum;
    }
    else{
        sum = (k*(k+1)/2);

        ll besi = mid - k;
        
        ll newMid = k - (++besi);

        ll newSum = newMid*(newMid+1)/2;

        ll extra = sum - newSum-k;
        
        sum+=extra;
        return sum;
    }
}



void solve(){
    ll k, x; cin >> k >> x;

    ll l = 1, r = (k*2)-1;
    ll totItem = r;

    ll ans = 0;
    ll takeSum = 0;

    while(l <= r){
        ll mid = l+((r-l)/2);
        ll sum = check(mid, l, r, k);

        if(sum == x){
            takeSum = sum;
            ans = mid;
            break;
        }
        else if(sum < x){
            takeSum = sum;
            l = mid+1;
            ans = mid;
        }
        else r = mid-1;


    }

    if(ans < totItem && x > takeSum) ++ans;

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