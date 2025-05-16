// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    vector<int> v(4);
    for(auto &i: v) cin >> i;
    sort(v.begin(), v.end());
    int ab, bc, ac, abc;
    abc = v[3];
    ac = v[2];
    ab = v[1];
    bc = v[0];

    int c = abs(abc - ab);
    int b = abs(bc - c);
    int a = abs(ab - b);
    
    cout << a << ' ' << b << ' ' << c << '\n';



}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}