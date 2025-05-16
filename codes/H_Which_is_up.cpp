// In The Name of Almighty Allah

#include <bits/stdc++.h>
using namespace std;

#define ll      			long long
#define errv				for(auto it: v){cerr << it << ' ';}
#define star    			cerr << "*\n"; 
    

void solve(){
    int n; cin >> n;
    int x1 = 1;
    int count = 1;
    for(int i = 1; i < n; i++){
        ll res = ((4*x1) ^ i) % 6;
        if(res == 1) count++;
        x1 = res;
    }
    cout << count << '\n';
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}