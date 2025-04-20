// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n; cin >> n;
    vector<int> v(n+1);
    map<int , int> mp;
    vector<int> vp(n+1);
    vector<int> increasing(n+1);
    vector<int> decreasing(n+1);
    int mx = -1, mn = INT_MAX;
    int max_el = -1;
    for(int i = 1; i <=n; i++){
        cin >> v[i];  
        mx = max(mx, v[i]);
        max_el = max(max_el, v[i]);
        increasing[i] = max(mx, v[i]);
    }
    for(int i = n; i >=1; i--){     mn = min(mn, v[i]);     decreasing[i] = mn;}

    int resume = n;
    for(int i = n; i >=1; i--){
        if(v[i] < max_el){
            mp[v[i]] = max_el;
            vp[i] = (max_el);
        }
        else{
            mp[v[i]] = max_el; 
            vp[i] = (max_el);
            resume = i-1;
            break;
        }
    }
    
    for(int i = resume; i >= 1; i--){
        int curr = v[i];
        int mxInLeft = increasing[i];
        int mnInRight = -1;
        mnInRight = decreasing[i == n ? i:i+1];
        if(mnInRight >= mxInLeft){
            vp[i] = mxInLeft;
            mp[v[i]] = mxInLeft;
        } 
        else{
            int ans = max(mxInLeft, mp[mnInRight]);
            vp[i] = ans;
            mp[v[i]] = ans;
        } 
    }
    for(int i = 1; i <= n; i++) cout << vp[i] << ' ';
    cout << '\n';
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