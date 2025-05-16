// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int a, b, c; cin >> a >> b >> c;
    vector<int> arr(3);
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    sort(arr.begin(), arr.end());
    cout << (.5 * arr[0] * arr[1]) << '\n'; 
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}