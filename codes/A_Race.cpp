
#include <iostream>
using namespace std;

void solve(){
    int a, x, y; cin >> a >> x >> y;
    int mn = min(x, y);
    int mx = max(x, y);
    if(mn <= a and a <=mx) {
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
