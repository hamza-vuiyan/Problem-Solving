// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n; cin >> n;
    n+=1;
    string str = to_string(n);
    set<char> st(str.begin(), str.end());
    int size = st.size();
    while(size < 4){
        n++;
        str = to_string(n);
        set<char> nst(str.begin(), str.end());
        size = nst.size();
    }
    cout << n << '\n';
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}