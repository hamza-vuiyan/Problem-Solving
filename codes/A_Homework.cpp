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
    int n; cin >> n;
    string a; cin >> a;
    int m;cin >> m;
    string b, c; cin >> b >> c;

    deque<char> dq;
    dq.clear();

    for(int i = 0; i < n; i++){
        dq.push_back(a[i]);
    }

    int l = 0, r = m-1;
    for(int i = 0; i < m; i++){
        if(c[i]=='D'){
            dq.push_back(b[i]);
        }
        else{
            dq.push_front(b[i]);
        }
    }
    for(auto it: dq){
        cout << it;
    }
    cout << '\n';
    dq.clear();


}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    signed t; cin >> t;
    while(t--)  solve();
}