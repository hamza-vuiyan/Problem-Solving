// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n, m,  l, r; cin >> n >> m >> l >> r;
    int pointA = 0, pointB = 0;
    if(abs(l) < r){
        pointA = min(abs(l), m);
        m-=pointA;
        pointB+=m;
        if(pointA > 0) pointA*=(-1);
        cout << pointA << ' ' << pointB << '\n';
    }
    else{
        pointB = min(r, m);
        m-=pointB;
        pointA-=m;
        cout << pointA << ' ' << pointB << '\n';
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