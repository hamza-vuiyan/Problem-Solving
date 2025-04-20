// // In The Name of Almighty Allah

// #include <bits/stdc++.h>
// using namespace std;

// #define ll      			long long
// #define errv				for(auto it: v){cerr << it << ' ';}
// #define star    			cerr << "*\n"; 
    

// void solve(){
//     ll n, k; cin >> n >> k;
//     vector<ll> v(n);
//     map<ll , ll> mp;
//     for(auto &i: v){
//         cin >> v[i];
//         mp[i]++;
//     }
//     vector<pair<ll, ll>> vp(mp.begin(), mp.end());
//     map<ll, bool> check;

// ll score = 0;

//     for(ll i = 0; i < vp.size(); i++){
//         if(check[v[i]]) continue;
//         ll key = k - vp[i].first;

//         ll l = 0, r = vp.size()- 1;

//         while(l <= r){
//             ll mid = (l+r)/2;
//             if(key == vp[mid].first){
//                 score+=(min(vp[i].second, vp[mid].second));
//                 check[vp[i].first] = true;
//                 check[vp[mid].first] = true;
//             }
//             else if(key < vp[mid].first){
//                 r = mid-1;
//             }
//             else {
//                 l = mid+1;
//             }
//         }
//     }
//     cout << score << '\n';
    
// }

// signed main(){
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
//     ll t;
//     cin >> t;
//     while (t--){
//         solve();
//     }
// }

// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    for(auto &i: v){
        cin >> i;
    }
    sort(v.begin(), v.end());
    ll l = 0, r = n-1;
    ll score = 0;
    while(l < r){
        ll left = v[l];
        ll right = v[r];
        ll res = left+right;
        if(res == k){
            score++;
            l++;
            r--;
        }
        else if (res > k) r--;
        else l++;
    } 
    cout << score << '\n';
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