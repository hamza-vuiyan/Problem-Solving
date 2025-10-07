// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      	    long long
#define star    	    cerr << "*\n"; 
#define cerrV(x)            for(auto it: x) cerr << it << ' '; cerr << '\n'; 
#define cerr(i, x)          cerr << 'i' << " = " << x << '\n';
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()
#define cerrPair(x)         for(auto it: x) cerr << it.first << ' ' << it.second << '\n';
#define cerrn		    cerr << '\n';
#define ceil(x, y)          (x/y) + (x%y != 0)

void solve(){
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(auto &i: v) cin >> i;
    vector<int> nv;
    int mx = -1;
    for(auto it: v){
        if(it > v[k-1]) nv.push_back(it);
        mx = max(mx, it);
    }


    sort(all(nv));
    int sz = nv.size();

//     cerrV(nv);
// cerrn;

    int myPos = v[k-1];
    int currWater = 1;
    int l = 0;

    vector<int> wv;
    wv.push_back(1);
    int previousWaterLevel = 0;

    while(myPos < mx){
        int timeToTeleport = nv[l] - myPos;

        int timeTowater = myPos - currWater+1;

        // cerr << myPos << ' ' <<  currWater << '\n';

        if( timeToTeleport <= timeTowater){
            myPos = nv[l];
            l++;
            currWater+=timeToTeleport;
        }
        else{
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";


    
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    signed t; cin >> t;
    while(t--)  solve();
}