// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    unordered_set<int> st;
    st.insert(a);
    st.insert(b);
    st.insert(c);
    st.insert(d);
    cout << 4 - st.size() << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}