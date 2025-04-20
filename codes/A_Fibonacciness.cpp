// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

int see(int a, int b, int c, int d, int e){
    int sum = 0;
    if(a+b == c) sum++;
    if(b+c == d) sum++;
    if(c+d == e) sum++;
    return sum;
}

void solve(){
    int a, b, d , e; cin >> a >> b >> d >> e;
    int arr[4];
    arr[0] = a+b;
    arr[1] = d-b;
    arr[2] = e-d;
    int ans = 1;
    int i = 0;
    while(i < 4){
        int val = see(a, b, arr[i], d, e);
        ans = max(ans, val);
        i++;
    }
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